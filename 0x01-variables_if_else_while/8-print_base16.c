#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - The program prints all single digit numbers of base 16 .
 *
 * @void: The function main takes no args.
 *
 * Return: Always returns 0 .
 */

int main(void)
{
	int i;
	char c;

	c = 'a';
	i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (c != 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
