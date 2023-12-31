#include "main.h"

/**
 * clear_bit - sets the value of a bit at the index.
 * @n: The bit.
 * @index: The bit to set the value at.
 *
 * Return: 1 if successful, if an error -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
