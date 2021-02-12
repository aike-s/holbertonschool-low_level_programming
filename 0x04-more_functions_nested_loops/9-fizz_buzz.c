#include <stdio.h>
/**
 *main - name funtion 
 *Return: always (0)
 **/
int main(int)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf ("Fizz Buzz");
		else if (i % 3 == 0)
			printf ("Fizz");
		else
			printf ("Buzz")
		printf ("%d", i);
		printf ("\n");
	}
	return (0);
}
