#include "lists.h"
/**
 * print_list - prints all the elementos of a list
 * @h: pointer to the list to print
 * Return: the number of nodes
 **/
size_t print_list(const list_t *h)
{
	const list_t *box;
	int num = 0;

	box = h; /*give the values of h to box*/
	if (box == NULL)
		return (0);
	while (box != NULL) /*while the linked list ends*/
	{
		if (box->str == NULL)
			printf("[0] (nil)\n");
		else
		/*print what is in len and str*/
		printf("[%d] %s\n", box->len, box->str);
		/*pass to the next node*/
		box = box->next;
		/*and add one to num each time it advances a node*/
		num++;
	}
	return (num);
}
