#include "main.h"
/**
* _strlen -  print length of a string
* @s: variable of the program
* Return: i - always
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}




