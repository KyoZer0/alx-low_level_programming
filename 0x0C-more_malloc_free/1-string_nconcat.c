#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of string
 *
 * @str: the string
 *
 * Return: the length of str
 */
int _strlen(char *str)
{
	char *p = str;

	while (*str)
		str++;
	return (str - p);
}
/**
 * *string_nconcat -  a function that concatenates two strings.
 *
 * @s1: the first string.
 *
 * @s2: the second string.
 *
 * @n: the n bytes to copied.
 *
 * Return: returns a pointer to the allocated space.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int index = 0;
	int jndex = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;
	char *str_nconcat = malloc(sizeof(char) * len1 + n + 1);

	if (str_nconcat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		str_nconcat[jndex++] = s1[index];

	for (index = 0; index < n; index++)
		str_nconcat[jndex++] = s2[index];

	str_nconcat[jndex] = '\0';

	return (str_nconcat);
}
