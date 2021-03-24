#include "lists.h"
/**
 * list_length - prints all the elements of a listint_t list
 * @h: pointer to head
 * Return: the number of nodes
 **/
unsigned int list_length(const listint_t *h)
{
	const listint_t *box;
	unsigned int num = 0;

	box = h;
	if (box == NULL)
		return (0);
	while (box != NULL)
	{
		box = box->next;
		num++;
	}
	return (num);
}
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the list
 * @index: where the node have to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next;
	unsigned int i = 0, num_nodes = 0;

	num_nodes = list_length(*head);
	if (!head || num_nodes < index)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		i++;
		if (i == (index - 1))
		{
			/*save the position after the node to be deleted*/
			next = tmp->next->next;
			/*delete the node at index*/
			free(tmp->next);
			/*join the list again with the next position*/
/*that was saved in next*/
			tmp->next = next;
		}
		tmp = tmp->next;
	}
	return (1);
}
