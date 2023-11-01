#include "main.h"
#include <stdio.h>
/**
 * _strcat - function also returns a pointer to that string.
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; *(dest + j) != 0; j++)
	{
	}
	for (i = 0; *(src + i) != 0; i++, j++)
	{
		*(dest + j) = *(src + i);
	}
	*(dest + j) = 0;
	return (dest);
}
