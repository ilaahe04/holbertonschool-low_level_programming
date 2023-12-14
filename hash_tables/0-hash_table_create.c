#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates new hash table.
 *
 * @size: size of new hash table.
 *
 * Return: new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t*)malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(8 * size);
	if (ht->array ==  NULL)
		return (NULL);

	return(ht);
}
