#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head to the doubly linked list
 * @n: data for the new node
 * Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	size_t n_elements, i = 0;

	if (!head)
		return (NULL);

	n_elements = dlistint_len(*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	n_elements = dlistint_len(*head);
	new_node->n = n;
	new_node->next = NULL;

	if (n_elements < 1)
		new_node->prev = NULL;

	else
	{
		while (*head != NULL)
		{
			i++;
			if (i == n_elements)
			{
				/*means that we are in the last position*/
				/*where the new node will be added*/
				new_node->prev = *head;
				(*head)->next = new_node;
			}
			*head = (*head)->next;
		}
	}
	return (*head);
}
