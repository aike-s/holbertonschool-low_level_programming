#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: anchura
 *@height: altura
 *Return: an int
 **/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	if (width < 0 || height < 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height); /*espacio de memoria para punteros*/
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width); /*este es el que reserva el tamaño para los numeros*/
		if (ptr[i] == NULL)
		{
			return (NULL);
			for (; i >= 0; i--)
				free(ptr[i]);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	free(ptr);
	return (ptr);
}
