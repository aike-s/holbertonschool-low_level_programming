#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	if (key == NULL)
		return (0);

	/* here we assign to index the index in which the element */
	/* will be added in ht->array with the function key_index*/
	index = key_index((const unsigned char *)key, ht->size);

	/* IMPORTANT: now it will check if in the index position */
	/* an element already exists or not */

	/* no, it does not exist yet, so we pass the empty head as argument */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = add_nodeint(&head, key, value);
			if (ht->array[index] == NULL)
			/* would mean that there was a failure to create the new node */
				return (0);
	}

	/* yes, it already exists, so we pass the existing node as current head */
	else
	{
		ht->array[index] = add_nodeint(&ht->array[index], key, value);
			if (ht->array[index] == NULL)
			/* would mean that there was a failure to create the new node */
				return (0);
	}
	return (1);
}
