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
	/*to save the following node in tmp*/
	tmp = (*head)->next;
	/*to save the current head data*/
	data_node = (*head)->n;
	/*delete the head node*/
	free(*head);
	/*update head with the next node that was stored in tmp*/
	*head = tmp;
	return (data_node);
}
