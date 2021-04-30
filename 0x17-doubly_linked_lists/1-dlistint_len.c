#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list
 * @h: head in the dobly linked list
 * Return: the number of elements in a linked dlistint_t list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
