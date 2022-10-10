#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *bloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	bloc = malloc(nmemb * size);
	if (bloc != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			bloc[i] = 0;
		return (bloc);
	}
	else
		return (NULL);
}
