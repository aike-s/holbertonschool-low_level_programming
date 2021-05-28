#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 * Return: always void
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int i = 0;
	hash_node_t *table_node;

	if (!ht)
		return;

	putchar('{');

	for (; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
			continue;
		else
			table_node = ht->array[index];
			while (table_node != NULL)
			{
			/* for each index you reach, you have to scroll */
			/* through the linked list you find there */
				if (i == 0)
					printf("'%s': '%s'", table_node->key, table_node->value);
				else
					printf(", '%s': '%s'", table_node->key, table_node->value);
				table_node = table_node->next;
				i++;
			}
	}

	printf("}\n");
}
