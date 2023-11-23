#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be
 *		flipped to transform one number into another.
 * @n: The source number.
 * @m: The target number to flip n into.
 *
 * Return: The count of bits that need to be flipped to transform n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
