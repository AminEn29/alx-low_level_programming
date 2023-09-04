#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - function the give sum of number
 * @argc: count number of argument
 * @argv: array that store argument
 * Return: 0 in success, 1 in fail
*/
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	while (i < argc)
	{
		strtol(argv[i], &endptr, 10);
			if (*endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		i++;
	}
		printf("%d\n", sum);
	}
	return (0);
}

