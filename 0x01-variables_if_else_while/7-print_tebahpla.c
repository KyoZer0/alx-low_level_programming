#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - The program prints the alphabets in reverse.
 *
 * @void: The function main takes no args.
 *
 * Return: Always returns 0 .
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
