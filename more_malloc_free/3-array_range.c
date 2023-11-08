#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - check the code
 *
 * @min: var
 * @max: var
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;
	return (arr);
}
