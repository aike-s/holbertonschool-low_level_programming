#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the list
 * @n: number to put in the list
 * Return: the address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_box, *last;

	if (!head)
		return (0);
	new_box = malloc(sizeof(listint_t));
	if (new_box == NULL)
		return (NULL);
	new_box->n = (int) n;
	new_box->next = NULL;
	if (*head != NULL)
	{
		last = malloc(sizeof(listint_t));
		if (last == NULL)
		{
			/*if allocate fails, free new_box*/
			free(new_box);
			return (NULL);
		}
/*here we only pass a pointer to the first node*/
		last = (*head);
		while (last->next != NULL)
			/*ask for the next node*/
			last = last->next;
		last->next = new_box;
		return (last->next);
	}
	*head = new_box;
	return (*head);
}
