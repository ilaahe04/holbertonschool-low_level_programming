#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer.
 *@array: Array variable.
 *@size: array length
 *@cmp: function that compare values
 *
 *Return: returns an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
