#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - addition of all arguments
 * @n: number of given integers
 * Return: sum of these arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
