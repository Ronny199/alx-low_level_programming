#include <stdio.h>

/**
 * main - printing single digits in base 10
 *
 * return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '10');

	putchar("\n");

	return (0);
}
