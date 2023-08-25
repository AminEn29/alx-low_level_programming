#include "main.h"
/**
* _strncpy - program that copie character from source according to n
* @dest: isthe distination source
* @src: is the txt that will addd to dest
* @n: how much charatare will type
* Return: return pointer dest
*/
char *_strncpy(char *dest, char *src, int n)
{
		int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	/*here when j > n the loopt will end and will printf until src[n]*/
	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[i + j] = src[j];
	if (j < n)
	{
	dest[i + j] = '\0';
	}
	else
	{
		return (dest);
	}
	return (dest);
}
