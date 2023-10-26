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
	int i, j;

	for (j = 0; *(dest + j) != 0; j++)
	{
		for (i = 0; *(src + i) != 0 && i < n; i++)
		{
			*(dest + j) = *(src + i);
		}

		*(dest + j) = 0;
	}
	return (dest);
}
