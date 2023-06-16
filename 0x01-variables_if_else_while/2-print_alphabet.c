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

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
