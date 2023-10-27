#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - check the code
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
