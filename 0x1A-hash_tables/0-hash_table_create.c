#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: a pointer to the newly created hash table
* or NULL if something went wrong
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		return (NULL);

	/* here is the space for the base hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	/* now it allocates space for each array in the table */
	/* each one of them will be a node, that's why it is allocated */
	/* with the size of the structure for a linked list */
	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* now each node is initialized to NULL */
	/*for (; i < size; i++)*/
	/* hash_table->array[i] = NULL;*/

	return (hash_table);
}
