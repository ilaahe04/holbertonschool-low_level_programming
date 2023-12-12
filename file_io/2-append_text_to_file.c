#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * append_text_to_file - appends text to a file
  * @filename: file to append to, if NULL, return -1
  * @text_content: content to append, if NULL, do not append
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int new_file, w;

	if (filename == NULL)
	{
		return (-1);
	}
	new_file = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	if (new_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(new_file, text_content, strlen(text_content));
		if (w == -1)
		{
			close(new_file);
			return (-1);
		}
	}
	close(new_file);
	return (1);
}
