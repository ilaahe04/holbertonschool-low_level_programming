#include "main.h"
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
	char **arr = malloc((strlen(str) + 1) * sizeof(char *));
	int i = 0;

	token = strtok(str, " \n\t");
	while (token != NULL)
	{
	       *(arr + i) = strdup(token);
		if (*(arr + i) == NULL)
		{
			free(*(arr + i));
			exit(1);
		}
		i++;
		token = strtok(NULL, " \n\t");
	}
	*(arr + i) = NULL;
	return (arr);
}
