#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head
 * Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
		const listint_t *box;
		int num = 0;

		box = h; /*give the values of h to box*/
		while (box != NULL) /*while the linked list ends*/
		{
			/*print the elements of the list*/
			printf("%d\n", box->n);
			/*pass to the next node*/
			box = box->next;
			/*and add one to num each time it advances a node*/
			num++;
		}
		return (num);
}
