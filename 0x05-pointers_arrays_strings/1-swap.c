/**
 * swap_int - swaps two numbers
 *
 * @a: the first number
 *
 * @b: the second number
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
