#include "main.h"
/**
 * main - Entry point
 *
 * Return: always returns 0
 */


int main(void)
{
	char str[] = "_putchar";
	char ln[] = "\n";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(*ln);
	return (0);
}
