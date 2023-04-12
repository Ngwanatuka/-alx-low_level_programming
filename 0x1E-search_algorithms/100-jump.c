#include "search_algos.h"

/**
 * jump_search - function to perform a jump search
 * @array: the pointer to the first element
 * @size: it is the size of the array
 * @value: the value to search
 * Return: -1 on failure, and the index on success
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size), j;

	if (array == NULL)
		return (-1);

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);

	for (j = i - jump; j <= i && j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
