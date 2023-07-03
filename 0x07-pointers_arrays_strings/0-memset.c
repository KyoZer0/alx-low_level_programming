/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointer to the string
 *
 * @b: constant
 *
 * @n: n byte to use
 *
 * Return - pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
