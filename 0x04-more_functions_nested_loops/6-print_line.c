#include "main.c"
/**
 * print_line - prints underscore
 * @n: takes int
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
