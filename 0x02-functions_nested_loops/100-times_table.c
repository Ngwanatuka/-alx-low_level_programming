#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

void print_times_table(int n)
{

int a = 0, rep, b;

if (n < 0 || n > 15)
	return;

while (a <= n)
{
	for (b = 0; b <= n; b++)
	{
		rep = a * b;
		if (b == 0)
			putchar('0' + rep);
		else if (rep < 10)
		{
			putchar(' ');
			putchar(' ');
			putchar('0' + rep);
		}
		else if (rep < 100)
		{
			putchar(' ');
			putchar('0' + rep / 10);
			putchar('0' + rep % 10);
		}
		else
		{
			putchar('0' + rep / 100);
			putchar('0' + (rep - 100) / 10);
			putchar('0' + rep % 10);
		}
		if (b < n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	a++;
}
}
