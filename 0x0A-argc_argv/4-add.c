#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - program that prints its name
 *@argv: pointer to the string
 *@argc: number of the word in the string
 *Return: the name of the string
 **/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
		else
			printf("0\n");
		return (0);
}
