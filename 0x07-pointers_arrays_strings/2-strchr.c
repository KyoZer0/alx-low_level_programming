/**
 * *_strchr - ocates a character in a string
 *
 * @s: the string
 *
 * @c: the character
 *
 * Return:  first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
