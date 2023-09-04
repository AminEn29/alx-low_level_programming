#include <stdio.h>
/**
 * main - function that print the number of argument pass to it
 * @argc: count the number of argument
 * @argv: is an array of string , store argument
 * Return: 0 in seccuess
*/
int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", argc);
	}
	return (0);
}
