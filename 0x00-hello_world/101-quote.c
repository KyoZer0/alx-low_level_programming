#include <stdio.h>
#include <unistd.h>

/**
 * my_strlen - Counts and returns the length of the string passed to it.
 *
 * @str : The string to be counted.
 *
 * Return: returns the length of the string.
 */
int	my_strlen(char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * main - Entry point
 *
 * @void : the main function takes no parameters.
 *
 * Return: always returns 1
 */
int	main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, &str, my_strlen(str));
	return (1);
}
