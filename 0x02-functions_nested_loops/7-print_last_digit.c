#include "main.h"
/**
* hello
* */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = n % 10;
	if (i < 0)
		i = -i;
	_putchar (i + 48);
	return (i);
}
