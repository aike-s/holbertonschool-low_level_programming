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
	/* MISION */
	/* recorrer toda la tabla hasta llegar a ht->size */
	for (; index < ht->size; index++)
	{
		/* en cada index hacer free a cada nodo que ahi se encuentre */
		table_node = ht->array[index];
		free_list(table_node);
	}
	/* liberar la tabla base */
	free(ht);
}
