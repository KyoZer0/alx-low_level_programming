#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specified index.
 * @n: The integer containing the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: If an error occurs, return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
