#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - check the code
 *
 * @h: var
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
