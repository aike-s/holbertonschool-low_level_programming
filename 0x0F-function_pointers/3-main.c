#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - description
 *@ac: count the elements
 *@av: put the arguments
 *Return: 0
 **/
int main(int ac, char *av[])
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((av[2][0] == '/' || av[2][0] == '%')
	    && av[2][1] == '\0' && av[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
	return (0);
}
