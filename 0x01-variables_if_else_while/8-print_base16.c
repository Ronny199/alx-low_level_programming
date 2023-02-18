#include <stdio.h>
#include <ctype.h>
/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num;
	chae la;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (la = 'a'; l <= 'f'; la++)
	{
		putchar(la);
	}

	putchar('\n');

	return (0);
}
