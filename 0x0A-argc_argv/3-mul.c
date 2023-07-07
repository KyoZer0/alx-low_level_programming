#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 *
 * @argc: counts the number of args
 *
 * @argv: 2d array of args
 *
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
