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
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';

    return dest;
}

