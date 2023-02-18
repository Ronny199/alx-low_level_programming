#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int num;
	int letter;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
