#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the list to free
 * Return: always void
 **/
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->len);
		free(head->str);
		free(head->next);
		head = head->next;
	}
	free(head);
}
