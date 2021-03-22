#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the list
 * Return: the head node’s data
 **/
int pop_listint(listint_t **head)
{
	int data_node;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = (*head)->next;
	data_node = (*head)->n;
	free(*head);
	(*head)->next = tmp;
	return (data_node);
}
