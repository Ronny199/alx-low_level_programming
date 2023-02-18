#include <stdio.h>
/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	if (num != 57)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
