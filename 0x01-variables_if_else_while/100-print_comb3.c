#include <stdio.h>
/**
 * main - Entry point
 * Description: prints combs of numbers
 * @void: The main function takes no parameters
 * Return: Always 0 (Success)
 */
int	main(void)
{
	int i;
	int j;

	i = 48;
	j = i + 1;

	while (i <= 57)
	{
		while (j <= 57)
		{
			putchar(i);
			 putchar(j);
			if (j == 57 && i == j - 1)
			break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
		j = i + 1;
	}

	putchar('\n');

	return (0);
}
