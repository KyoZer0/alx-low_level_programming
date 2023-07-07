#include <stdio.h>
/**
 * main - a program that prints the names of args
 *
 * @argc: counts the number of args
 *
 * @argv: 2d array of args
 *
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
