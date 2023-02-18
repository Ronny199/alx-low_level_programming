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

	for (num = 0; num <= 'z'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
