#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - prints each element of linked list with lengths.
 *
 * @h: struct that provides string, length and address of next node.
 *
 * Return: the number of nodes in given linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while ( h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n",h->str);
		}
		count++;
		h = h->next;
	}
	return count;
}
