#include "main.h"
#include "stdio.h"

/**
 * print_alphabet_x10 -  prints the alphabet x10
 *
 */

void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			putchar(alpha2);
		}
		putchar('\n');
	}
}
