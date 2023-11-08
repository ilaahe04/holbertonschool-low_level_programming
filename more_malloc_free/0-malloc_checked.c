#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - check the code
 *
 * @b: var
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
