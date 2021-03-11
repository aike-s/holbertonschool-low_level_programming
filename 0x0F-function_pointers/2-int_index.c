#include "function_pointers.h"
/**
 *int_index - search for an integer
 *@array: array to use
 *@size: size of the array
 *@cmp: pointer to the function to be used to compare values
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (0);
	if (array == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		cmp(array[i]);
	return ();
}
