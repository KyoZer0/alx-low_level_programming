#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - The program prints all single digit numbers of base 10 .
 *
 * @void: The function main takes no args.
 *
 * Return: Always returns 0 .
 */

int main(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
