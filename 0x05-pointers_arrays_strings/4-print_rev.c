#include "main.h"
/**
 * my_strlen - counts the srting characters
 *
 * @s: takes a char s
 *
 * Return: return the length
 */
int my_strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}

	return (s - p);
}

/**
 * print_rev - prints the char in reverse
 *
 * @s: the string
 */

void print_rev(char *s)
{

	int len = my_strlen(s);

	while (s[len] - 1)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
