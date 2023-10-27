#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search a string for any set of bytes.
 * @s: input
 * @accept: input
 * Return: A pointer to the byte in 's' that matches
 */

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
