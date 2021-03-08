#include "dog.h"
#include <stdio.h>
/**
 *init_dog - initialize a variable of type struct dog
 *@d: doggy
 *@name: name for the dogg
 *@age: age of the dogg
 *@owner: owner of the dogg
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
