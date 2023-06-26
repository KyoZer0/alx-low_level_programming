#include "main.h"
/**
 * print_rev - prints the char in reverse
 *
 * @s: the string
 */
void print_rev(char *s)
{

	int len = _strlen(s);

	while (s[len] - 1)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
