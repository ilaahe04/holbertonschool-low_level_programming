#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @array: name of the person
 * @action:f
 * size: number
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL && action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
