#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints numbers.
 *
 * @void: The main function takes no parameters
 *
 * Return: Always 0
 */

int main(void)
{

	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
