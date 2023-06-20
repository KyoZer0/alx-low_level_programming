#include "main.h"
/**
 * print_alphabet_x10 - this functions print the alphabets 10 times.
 *
 * @void: the function doesn't take anything as args.
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;


	while (i != 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		i++;
		_putchar('\n');
	}
}

