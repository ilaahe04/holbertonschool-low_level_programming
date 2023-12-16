#include <stdlib.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_table_t *new_node;
	
	if (ht == NULL || key == NULL || *key = '\0')
	{
		return (NULL);
	}
}
