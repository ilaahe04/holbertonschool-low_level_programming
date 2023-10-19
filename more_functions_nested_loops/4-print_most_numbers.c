#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - check the code
 * _putchar - writes the character c to stdout
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char num;

	for  (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}	_putchar('\n');
}
