#include <stdarg.h>
/**
* sum_them_all - Returns the sum of all its paramters.
*
* @n: The number of the paramters passed to the function.
*
* @...: A variable number of paramters to calculate the sum of.
*
* Return: If n == 0 it returns 0.
*         Otherwise returns the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;
	int sum = 0;

	va_start(va, n);

	while (n > i)
	{
		sum += va_arg(va, int);
		i++;
	}
	va_end(va);
	return (sum);
}
