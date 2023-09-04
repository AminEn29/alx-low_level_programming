#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplay two number
 * @argc: variable that count how much argument receive
 * @argv:  pointer to an array of string that store the argument pass by CL
 * Return: 0 in success & 1 in fail
*/
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
