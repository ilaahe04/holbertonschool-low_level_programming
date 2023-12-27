#include "main.h"
/**
 * _getline - delimited string input
 * Return: NULL
 */
char *_getline(void)
{
	char *buff = NULL;
	size_t len = 0;
	int read;
	
	read = getline(&buff, &len, stdin);
	if (read == -1)
		free(buff);
	else
		return (buff);
	return (NULL);
}
