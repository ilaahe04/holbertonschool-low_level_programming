#include "main.h"
#include <stdio.h>
/**
 * _memset - etry point
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int l = n;

	for (i = 0; i < l; i++)
	{
		s[i] = b;
	}
	return (s);
}
