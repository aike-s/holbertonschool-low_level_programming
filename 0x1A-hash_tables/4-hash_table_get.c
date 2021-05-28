#include "hash_tables.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: dest
 **/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *hash_table_node;

    /* to start with, find the key position with key_index */
	/* and check if something exists there or not */
	index = key_index((const unsigned char *)key, ht->size);

	hash_table_node = ht->array[index];

    /* if nothing exists there yet, return NULL */
	if (hash_table_node == NULL)
		return (NULL);

    /* if something already exists, check ht->array->next to see */
	/* if the linked list has more elements and look for key */
	else
	{
		/* find key and return ht->array->value of this */
		while (hash_table_node != NULL)
		{
			if (strcmp(hash_table_node->key, key) == 0)
				return (hash_table_node->value);
			hash_table_node = hash_table_node->next;
		}
	}

	/* if key doesn't exists, return NULL */
	return (NULL);
}
