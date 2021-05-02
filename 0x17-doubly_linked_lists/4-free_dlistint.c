#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head in the doubly linked list
 * Return: always void
 **/
void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
