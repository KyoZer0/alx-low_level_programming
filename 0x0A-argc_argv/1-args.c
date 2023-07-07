#include <stdio.h>
/**
 * main - a program that prints the number of args
 *
 * @argc: counts the number of args
 *
 * @argv: 2d array of args
 *
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
