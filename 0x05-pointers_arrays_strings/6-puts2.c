#include "main.h"
/**
 * my_strlen - takes a string and give the length
 *
 * @s: the string passed to the functions
 *
 * Return: the length of s
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
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len = my_strlen(str) - 1;
	int i  = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
