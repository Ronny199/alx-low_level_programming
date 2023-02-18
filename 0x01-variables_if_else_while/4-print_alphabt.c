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
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
