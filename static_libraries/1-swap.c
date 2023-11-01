#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 *
 * @a: variable
 * @b: variable
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
