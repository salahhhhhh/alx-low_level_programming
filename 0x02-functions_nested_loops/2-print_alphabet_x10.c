#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
