#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: the link for de the first
 * @n: the number to copy
 * Return: the address of the new element or NULL if it failed
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_box;

	if (!head)
		return (NULL);
	new_box = malloc(sizeof(listint_t));
	if (new_box == NULL)
		return (NULL);
	new_box->n = (int) n;
	new_box->next = *head;
	*head = new_box;
	return (*head);
}
