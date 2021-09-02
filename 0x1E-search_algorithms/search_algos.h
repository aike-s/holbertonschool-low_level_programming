#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

/*searches for a value in an array of integers*/
/*using the Linear search algorithm*/
int linear_search(int *array, size_t size, int value);
/*searches for a value in a sorted array of integers*/
/*using the Binary search algorithm*/
int binary_search(int *array, size_t size, int value);

#endif
