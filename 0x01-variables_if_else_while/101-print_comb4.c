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
	int k;

	i = 48;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == j - 1 && j == k - 1 && k == 57)
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
