#include "main.h"
#include <stdio.h>

/**
 * _strspn - Calculate the length of a prefix substring.
 * @s: input
 * @accept: input
 */

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
