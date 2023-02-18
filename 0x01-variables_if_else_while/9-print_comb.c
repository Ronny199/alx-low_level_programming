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

	for (num = 0; num < 10; num++)
	{
		putchar(num);

	if (num != 9)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
