#include "main.h"
/**
 * print_alphabet - this functions print the alphabets.
 *
 * @void: the function doesn't take anything as args.
 *
 * Return: the functiond deos not return any value.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
