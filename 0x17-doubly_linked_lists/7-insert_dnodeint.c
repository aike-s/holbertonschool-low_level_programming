#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head to the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = *h;
	unsigned int counter = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		/*if the linked list has not yet added nodes*/
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		add_dnodeint(&h, n);
		return (*h);
	}
	while (tmp)
	{
		if (counter == idx)
		{
			/* here is the union of the previous node */
			/* with the new node */
			tmp->prev->next = new_node;
			new_node->prev = tmp->prev;
			/* here is the union of the current node */
			/* with the new node to add it in a specific position */
			new_node->next = tmp;
			tmp->prev = new_node;
			return (new_node);
		}
		counter++;
		tmp = tmp->next;
	}
	return (NULL);
}
