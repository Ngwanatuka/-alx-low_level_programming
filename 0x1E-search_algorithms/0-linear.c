#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value of the search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
		size_t i = 0;

		if (array == NULL)
		{
			return (-1);
		}

		/* Iterate through each element in the array */
		for (; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			/* If a match is found, return the index */
			if (array[i] == value)
			{
				return (i);
			}
		}

		/* Value not found */
		return (-1);
}
