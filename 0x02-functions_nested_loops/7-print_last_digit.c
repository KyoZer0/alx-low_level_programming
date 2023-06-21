#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: does take an integer
 *
 * Return: returns the last degit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
