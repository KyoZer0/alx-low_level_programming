#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - The program prints the alphabets.
 *
 * @void: The function main takes no args.
 *
 * Return: Always returns 0 .
 */

int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
