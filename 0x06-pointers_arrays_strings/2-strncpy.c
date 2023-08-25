#include <stdio.h>
/**
*/
char *_strncpy(char *dest, char *src, int n)
{
		int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	/*here when j > n the loopt will end and will printf until src[n]*/
	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
