#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates the strings pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, *dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[index];

	return (dest);
}
