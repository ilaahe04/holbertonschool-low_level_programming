#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
