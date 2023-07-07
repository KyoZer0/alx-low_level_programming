#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds the  numbers in the args
 *
 * @argc: counts the number of args
 *
 * @argv: 2d array of args
 *
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i <= argc - 1)
	{
		if (!(argv[i][0] >= 48 && argv[i][0] <= 57))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
