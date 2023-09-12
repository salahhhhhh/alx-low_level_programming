#include <stdio.h>
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
