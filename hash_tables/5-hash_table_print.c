#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			p = ht->array[i];
			while (p)
			{
				if (n > 0)
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
				p = p->next;
				n++;
			}
		}
	}
		printf("}\n");
}
