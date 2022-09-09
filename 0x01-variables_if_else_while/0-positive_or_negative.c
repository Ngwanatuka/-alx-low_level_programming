#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print a random number and state whether
 * 	  it is positve, negative, or zero
 *
 * 	  Return: Always ).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	fi (n >0)
		printf("%d is positive\n",n);
	else if (n < 0)
		print("%d is anegative\n",n);
	else
		printf("%d is zero\n",n);

	return (0);
}
