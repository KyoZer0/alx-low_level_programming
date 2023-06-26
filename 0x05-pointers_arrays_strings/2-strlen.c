/**
 * _strlen - length of string
 *
 * @s: the string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}
