#ifndef FUNTION_POINTERS_H
#define FUNTION_POINTERS_H
/*writes the character c to stdout*/
int _putchar(char c);
/*prints a name*/
void print_name(char *name, void (*f)(char *));
/*executes a function given as a parameter on each element of an array*/
void array_iterator(int *array, size_t size, void (*action)(int));
/*searches for an integer*/
int int_index(int *array, int size, int (*cmp)(int));
#endif
