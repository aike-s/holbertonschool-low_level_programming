#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the list
 * Return: always void
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp_o;

	if (head)
	{
		tmp = *head;
		while (tmp)
		{
			/*to save the next node*/
			tmp_o = tmp->next;
			/*free the current node*/
			free(tmp);
			/*update tmp with the following node to iterate*/
			tmp = tmp_o;
		}
		*head = NULL;
	}
}
