#ifndef DOG_H
#define DOG_H
/**
 *struct dog - create a doggy
 *@name: name for the dog
 *@age: age of the dog
 *@owner: owner of the dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

/*initialize a variable of type struct dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/*prints a struct dog*/
void print_dog(struct dog *d);

/*creates a new dog*/
dog_t *new_dog(char *name, float age, char *owner);

/*frees dogs*/
void free_dog(dog_t *d);
#endif
