#include <stdio.h>

void rest_to_98()
{
    int n;
    int *ptr = &n;
    *ptr= 98;
    printf("n=%d\n", *ptr);
}