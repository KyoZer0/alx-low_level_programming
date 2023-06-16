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

	i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
