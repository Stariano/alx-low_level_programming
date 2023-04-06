#include "hash_tables.h"

/**
 * ash_table_create - Create a hash table.
 * @size: is the size of the array.
 * Return: Pointer to the newly created hashtable.
 */

hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *table = malloc(sizeof(size));

	if (table == NULL)
		return (NULL);

	return (table);
}
