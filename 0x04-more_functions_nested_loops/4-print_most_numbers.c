#include "main.h"
/**
 * print_most_numbers - this function prints numbers except 2 and 4
 *
 * @void: takes no args
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i != 58)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
