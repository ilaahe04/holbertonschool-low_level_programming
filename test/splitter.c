#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
/**
 * line_div - splits given string into parts
 *
 * @str: given string
 *
 * Return: modified char array.
 */
char **line_div(char *str)
{
	char *token;
	char **array = malloc((strlen(str) + 1) * sizeof(char *));
	int i = 0;

	token = strtok(str, " \n\t");
	while (token != NULL)
	{
	       array[i]	= strdup(token);
		if (array[i] == NULL)
		{
			free(array[i]);
			exit(99);
		}
		i++;
		token = strtok(NULL, " \n\t");
	}
	array[i] = NULL;
	return (array);
}
