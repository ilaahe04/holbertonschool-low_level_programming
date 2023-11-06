#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - fills memory
 * @str: str
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	int i, size = strlen(str);

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
