#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the number
 *
 * Return: Always 0 (Success)
 *
 */
void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
	_putchar(num);
	num++;
	}
	_putchar('\n');
}
