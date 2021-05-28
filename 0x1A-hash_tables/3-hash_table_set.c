#include "hash_tables.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: the link for de the first
 * @str: the string to copy
 * Return: the address of the new element or NULL if it failed
 **/
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *hash_table_node;

	if (!head)
		return (NULL);

	hash_table_node = malloc(sizeof(hash_node_t));
	if (hash_table_node == NULL)
		return (NULL);

	hash_table_node->key = (char *)key;
	hash_table_node->value = strdup(value);
	hash_table_node->next = *head;
	*head = hash_table_node;
	return (*head);
}
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
		ht->array[index] = add_node(&head, key, value);
			if (ht->array[index] == NULL)
			/* would mean that there was a failure to create the new node */
				return (0);
	}

	/* yes, it already exists, so we pass the existing node as current head */
	else
	{
		ht->array[index] = add_node(&ht->array[index], key, value);
			if (ht->array[index] == NULL)
			/* would mean that there was a failure to create the new node */
				return (0);
	}
	return (1);
}
