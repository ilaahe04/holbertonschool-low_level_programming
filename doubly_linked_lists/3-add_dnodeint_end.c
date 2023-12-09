#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - check the code
 *
 * @head: var
 * @n: var
 *
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_n;
		new_n->prev = temp;
	}

	return (*head);
}
