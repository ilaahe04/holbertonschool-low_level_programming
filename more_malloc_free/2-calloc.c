#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - check the code
 *
 * @nmemb: var
 * @size: var
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, c;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	c = nmemb * size;
	arr = malloc(c);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
