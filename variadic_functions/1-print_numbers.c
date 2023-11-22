#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers which written on prompt
 * @separator: separator between 2 sequental elements
 * @n: number of integers will pass
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
