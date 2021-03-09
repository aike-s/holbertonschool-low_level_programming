#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: name of the dogg
 *@age: age of the fogg
 *@owner: owner of the dogg
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggy;
	int i, j;
	int len_name = 0, len_owner = 0;

	for (i = 0; name[i]; i++)
		len_name++;
	for (i = 0; owner[i]; i++)
		len_owner++;
	new_doggy = malloc(sizeof(char) * len_owner + len_name + 1);
	if (new_doggy == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		new_doggy->name = name[i];
	for (j = 0; owner[j]; j++)
		new_doggy->owner = owner[j];
	(void)age;
	return (new_doggy);
}
