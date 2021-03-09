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
	int i, j;
	char *pt_name, *pt_owner;
	int len_name = 0, len_owner = 0;

	for (i = 0; name[i]; i++)
		len_name++;
	for (i = 0; owner[i]; i++)
		len_owner++;
	pt_name = malloc(sizeof(dog_t) * len_name + 1);
	pt_owner = malloc(sizeof(dog_t) * len_owner + 1);
	if (pt_name == NULL)
		return (NULL);
	if (pt_owner == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		pt_name[i] = name[i];
	for (j = 0; owner[j]; j++)
		pt_owner[j] = owner[j];
	(void)age;
	free (pt_name);
	free (pt_owner);
	return (new_dog);
}
