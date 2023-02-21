#include "main.h"
/**
 * main - entry point
 * description - print all alphabet in lowercase and a new line
 * return : always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}

