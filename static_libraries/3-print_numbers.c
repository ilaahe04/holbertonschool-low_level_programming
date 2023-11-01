#include "main.h"

/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
