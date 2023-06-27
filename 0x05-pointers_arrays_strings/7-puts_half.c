#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int n = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (len % 2)
	{
		n = (len - 1) / 2;
		while (n < len - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}

	_putchar('\n');
}
