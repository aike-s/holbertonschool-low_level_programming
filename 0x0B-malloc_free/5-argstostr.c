#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr -  concatenates all the arguments of your program
 *@ac: arg count
 *@av: arg value
 *Return: always void
 **/
char *argstostr(int ac, char **av)
{
	int i, j, count = 0, o = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
		/*tores the space of both variables in one variable for malloc*/
		count += 1;
	}
	ptr = malloc(sizeof(*ptr) * count + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[o] = av[i][j];
			/*copies the value of 'j' in 'o'*/
			o++;
			/*'o' avances too with 'j'*/
		}
		ptr[o] = '\n';
		o++;
		/*so that every time it moves forward it has changed position*/
	}
	return (ptr);
}
