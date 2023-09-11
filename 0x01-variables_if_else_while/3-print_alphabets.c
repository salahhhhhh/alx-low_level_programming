#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char y;

	y = 'A';
	i = 'a';
	while (i <= 'z')
	{
		putchar (i);
		i++;
	}
	while (y <= 'Z')
	{
		putchar (y);
		y++;
	}
	putchar ('\n');
	return (0);
}
