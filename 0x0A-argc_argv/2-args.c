#include <stdio.h>
/**
 * main - program that print argument recieve
 * @argc: count number of argument
 * @argv: array store argument
 * Return: 0 in success
*/
int main(int argc, char **argv)
{
	int i = 0;
	(void)argc;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
