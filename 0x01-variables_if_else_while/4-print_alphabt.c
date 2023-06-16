#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - The program prints the alphabets except for q and e.
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
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
