#include "main.h"
#include <stdio.h>

/**
 *swap_int - function that swaps the value
 *@a:first integer
 *@b:second integer
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
