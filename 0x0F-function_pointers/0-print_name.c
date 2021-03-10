#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: name of a person
 *@f: pointer to a funtion
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
