#include "main.h"
#include <stdio.h>
/**
 * _strncat - function also returns a pointer to that string.
 * @dest: This is destiny
 * @src: This is the copia
 * @n: variable
 * Return: This return copy
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j))
	{
		j++;
	}

	if (i != 0 && j != 0)
	{
		j = 0;
		while (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
	}
	if (i != 0 && j != 0)
	{
		*(dest + i) = 0;
	}
	return (dest);
}
