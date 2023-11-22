#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings given in prompt
 * @separator: separator between string
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
