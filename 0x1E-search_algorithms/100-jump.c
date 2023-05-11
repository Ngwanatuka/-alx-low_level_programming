#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 * is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, jump, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);
	prev = 0; /* Previous position initialized to 0 */
	jump = 0;

	while (array[(int)floor(fmin(step, size)) - 1] < value)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
			return (-1);
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (jump = prev; jump < fmin(step, size); jump++)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);

		if (array[jump] == value)
		{
			printf("Found %d at index: %lu\n", value, jump);
				return (jump);
		}
	}

	printf("Found %d at index -1\n", value);
	return (-1); /* Value not found int the array */
}
