#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int num;
	int la;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (la = 'a'; la <= 'f'; la++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
