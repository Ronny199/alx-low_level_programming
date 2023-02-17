#include <stdio.h>

/**
 * main - lowercase alphabet printing followed by new line, excluding e and q
 *
 * return: always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar ('\n');

	return (0);
}
