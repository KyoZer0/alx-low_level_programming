#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers, followed by a new line.
*
* @separator: a string that will separate numbers.
*
* @n: The number of args passed to the function.
*
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ag, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ag);
}
