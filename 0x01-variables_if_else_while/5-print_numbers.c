#include <stdio.h>

/**
 * main - print all strings (0-9)
 * return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
