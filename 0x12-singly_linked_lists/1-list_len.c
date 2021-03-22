#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list to print
 * Return: the number of elements in a list
 **/
size_t list_len(const list_t *h)
{
	const list_t *box;
	size_t num_box = 0;

	box = h;
	if (!box)
		return (NULL);
	while (box != NULL)
	{
		box = box->next;
		num_box++;
	}
	return (num_box);
}
