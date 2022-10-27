#include "function_pointers.h"

/**
 * array_iterator - executes a funtion on each element of an array
 * @array: array to the targeted
 * @size: size of array
 * @action: funtion to be executed
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
