#include <stdio.h>
#include "holberton.h"
/**
 *main - prints the number of arguments passed into it
 *@argc: number of the word in the string
 *@argv: words of the string
 *Return: the name of the string
 **/
int main(int argc, char *argv[])
{
	argc -= 1;
	printf("%d\n", argc);
	(void)*argv;
	return (0);
}
