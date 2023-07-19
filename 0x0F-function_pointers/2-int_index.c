#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 *
 * @array: the array.
 *
 * @size: size of the elements.
 *
 * @cmp: pointer to func of one of the 3 in main
 *
 * Return: returns the index of the first element or -1 .
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
