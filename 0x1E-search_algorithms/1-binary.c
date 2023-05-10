#include "search_algos.h"

/**
 * binary_search - Performs binary search on a sorted array
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i, mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = (left + left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
