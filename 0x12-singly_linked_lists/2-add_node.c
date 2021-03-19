#include "lists.h"
/**
 * _strlen -  returns the length of a string
 *Return: lengthx
 *@s:puntero1
 **/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
/**
 * add_node - adds a new node at the beginning of a list
 * @head: the link for de the first
 * @str: the string to copy
 * Return: the address of the new element or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_box;

	new_box = malloc(sizeof(list_t));
	if (new_box == NULL)
		return (NULL);
	new_box->str = strdup(str);
	new_box->len = _strlen(str);
	new_box->next = *head;
	*head = new_box;
	return (*head);
}
