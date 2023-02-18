#include <stdio.h>

/**
 * main - entry
 * description: printing base 16 numbers
 * return: 0
 */
int main(void)
{
int nim;
char la;

for (num = 0; num <= 9; num++)
putchar((num % 10) + '0');

for (la = 'a'; la <= 'f'; la++)
putchar(la);

putchar('\n');

return (0);
}
