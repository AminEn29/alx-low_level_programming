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
	printf("%d\n", argc - 1);
	return (0);
}
