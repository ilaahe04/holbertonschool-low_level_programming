#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * array_iterator - prints an integer.
 * @array: the integer to point
 * @action:var
 * @size: var
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
