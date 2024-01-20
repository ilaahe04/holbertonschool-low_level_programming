#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 * @left: left bound of subarray
 * @right: right bound of subarray
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = left;

	printf("Searching in array: ");
	while (i <= right)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		i++;
	}
	printf("\n");
}
/**
 * binary_search - binary searching algorithm implementation
 * @array: array to search in
 * @size: size of array
 * @value: value to search
 *
 * Return: index of searched value. Otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		i = left + (right - left) / 2;
		if(array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			left = i + 1;
		}
		else
		{
			right = i - 1;
		}
	}
		return (-1);
}
