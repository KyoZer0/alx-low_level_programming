/**
 * my_strlen - takes a string and give the length
 *
 * @s: the string passed to the functions
 *
 * Return: the length of s
 */
int my_strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}

	return (s - p);
}
/**
 * rev_string - reverses a string
 *
 * @s: takes a string
 */
void rev_string(char *s)
{
	int len = my_strlen(s);
	int i = 0;
	int j = len - 1;
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
