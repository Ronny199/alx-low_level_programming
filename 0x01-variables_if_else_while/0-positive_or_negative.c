#include <stdio.h>

/**
 * main - printing if a number is positive, zero (0), or negative
 *
 * return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n, a);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n, a);
	}
	else
	{
		printf("%d is negative\n", n, a);
	}

	return (0);
}
