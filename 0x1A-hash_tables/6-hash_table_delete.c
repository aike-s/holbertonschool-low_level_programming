#include "hash_tables.h"
/**
 * free_list - frees a hash_node_t list
 * @head: pointer to the list to free
 * Return: always void
 **/
void free_list(hash_node_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	/* it's necesary to free key and value, a copy  */
	free(head->key);
	free(head->value);
	free(head);
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 * Return: always void
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *table_node;

	if (!ht)
		return;

	/* to begin with, the hash table is traversed */
	for (; index < ht->size; index++)
	{
		/* in each index, each node found there is freed */
		table_node = ht->array[index];
		free_list(table_node);
	}
	/* to finish, the base table is freed */
	free(ht->array);
	free(ht);
}
