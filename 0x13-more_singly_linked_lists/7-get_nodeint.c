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
 * get_nodeint_at_index - search for a specific number of node
 * @head: pointer to the list
 * @index: index of the node
 * Return: the nth node of a list
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int num_boxes = 0;

	if (!head)
		return (NULL);
	/*iterates until the number of nodes in which head is located*/
/*is equal to index*/
	num_boxes = list_length(head);
	if (num_boxes < index)
		return (NULL);
	while (head != NULL || i == index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
