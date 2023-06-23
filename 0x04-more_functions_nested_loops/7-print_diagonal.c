#include "main.h"
/**
 * print_diagonal - prints backslashes
 * @n: int
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	_putchar('\n');

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
}

