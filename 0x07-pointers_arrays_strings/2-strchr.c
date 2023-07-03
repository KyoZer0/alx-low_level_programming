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
