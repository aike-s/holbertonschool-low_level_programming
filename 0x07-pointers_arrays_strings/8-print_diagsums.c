#include <stdio.h>
/**
 *print_diagsums - sets the value of a pointer to a char
 *@a: pointer to pointer
 *@size: tamaño
 *Return: always void
 **/
void print_diagsums(int *a, int size)
{
	int down, right;
	int first = 0, last = 0, limit = 1;

	for (down = 0; down < size; down++)
	{
		for (right = 0; right < size; right++)
		{
			if (down == right)
				first += *(a + ((down * size) + right));
			if ((size - limit) == right)
			{
				last += *(a + ((down * size) + right));
				limit++;
			}
		}
	}
	printf("%d, %d\n", first, last);
}
