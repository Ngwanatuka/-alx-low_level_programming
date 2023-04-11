#include "search_algos.h"

/**
 * linear_search - function to perform a linear search
 * @array: the pointer to the first element
 * @size: it is the size of the array
 * @value: the value to search
 * Return: -1 on failure, and the index on success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
