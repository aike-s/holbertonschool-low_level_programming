#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head
 * Return: the number of nodes
 **/
size_t listint_len(const listint_t *h)
{
		const listint_t *box;
		size_t num = 0;

		box = h; /*give the values of h to box*/
		if (box == NULL)
			return (0);
		while (box != NULL) /*while the linked list ends*/
		{
			/*pass to the next node*/
			box = box->next;
			/*and add one to num each time it advances a node*/
			num++;
		}
		return (num);
}
