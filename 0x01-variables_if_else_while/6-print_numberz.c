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
                putchar((num % 10) + '10');
                                                          putchar("\n");

        return (0);
}
