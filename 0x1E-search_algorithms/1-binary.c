#include "search_algos.h"

/**
 * print_array - print the values of an array
 * @array: the array to print
 * @start: the start index of the array
 * @end: the last index of the array
 * Return: always void, only prints
 **/
void print_array(int *array, size_t start, size_t end)
{
		for (; start <= end; start++)
		{
			if (start == end)
				printf("%d\n", array[start]);
			else
				printf("%d, ", array[start]);
		}
}

/**
 * binary_search - searches for a value in an array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value is not present
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, middle = 0, end = (size - 1), find_middle = end;

	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		/* Actual array */
		printf("Searching in array: ");
		print_array(array, start, end);

		/* Verify where is the value */
		if (array[start] == value)
			return (start);
		if (start == (end - 1))
		{
			start = end;
			continue;
		}
		if (start == end)
		{
			break;
		}

		middle = (find_middle / 2);
		if (value < array[middle])
		{
			end = (middle - 1);
			start = 0;
			find_middle = end;
		}
		else if (value > array[middle])
		{
			start = (middle + 1);
			find_middle = end + start;
		}
	}
	return (-1);
}
