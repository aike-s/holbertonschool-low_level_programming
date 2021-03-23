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
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the list
 * @idx: index
 * @n: number for the new node
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_box;
	unsigned int num_box = 0, i = 0;

	num_box = list_length(*head);
	/*to make sure that the index number exists in the list*/
	if (!head || num_box < idx)
		return (NULL);
	while (*head != NULL)
	{
		i++;
		if (i == idx)
		{
			new_box->next = (*head)->next;
			(*head) = new_box;
			return (*head);
		}
		*head = *head->next;
	}
	return (NULL);
}
