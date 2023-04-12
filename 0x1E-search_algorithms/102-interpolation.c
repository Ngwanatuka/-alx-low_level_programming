#include "search_algos.h"

/**
 * interpolation_search - function to perform an interpolation search
 * @array: the pointer to the first element
 * @size: it is the size of the array
 * @value: the value to search
 * Return: -1 on failure, and the index on success
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
