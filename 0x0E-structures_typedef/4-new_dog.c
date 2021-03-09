#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: name of the dogg
 *@age: age of the fogg
 *@owner: owner of the dogg
 *Return: new doggy
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggy;
	int i, j;
	char *pt_name, *pt_owner;
	int len_name = 0, len_owner = 0;

	for (i = 0; name[i]; i++)
		len_name++;
	for (i = 0; owner[i]; i++)
		len_owner++;
	pt_name = malloc(sizeof(char) * len_name + 1);
	pt_owner = malloc(sizeof(char) * len_owner + 1);
	new_doggy = malloc(sizeof(dog_t));
	if (pt_name == NULL)
		return (NULL);
	if (pt_owner == NULL)
	{
		free(pt_name);
		return (NULL);
	}
	if (new_doggy == NULL)
	{
		free(pt_name);
		free(pt_owner);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		pt_name[i] = name[i];
	pt_name[i] = '\0';
	for (j = 0; owner[j]; j++)
		pt_owner[j] = owner[j];
	pt_owner[j] = '\0';
	new_doggy->name = pt_name;
	new_doggy->owner = pt_owner;
	new_doggy->age = age;
	return (new_doggy);
}
