#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list to print
 * Return: the number of elements in a list
 **/
size_t list_len(const list_t *h)
{
	const list_t *box;
	size_t num;

	box = h;
	while (box != box->next)
	{
		num++;
	}
	return (num);
}
