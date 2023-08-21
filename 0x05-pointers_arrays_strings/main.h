#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void reset_to_98()
{
    int n = 402;
    printf("n=%d\n", n);
    int *ptr = NULL;
     ptr = &n;
    *ptr = 98;
    printf("n=%d\n", *ptr);
}
#endif