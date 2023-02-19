#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (z = 48; z < 58; z++)
	{
		for (y = 49; y < 58; y++)
		{
			for (x = 50; x < 58; x++)
			{
				if (x > y && y > z)
				{
					putchar(z);
					putchar(y);
					putchar(x);
					if (z != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

