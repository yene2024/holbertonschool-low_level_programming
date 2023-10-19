#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase.
 *@c: is uppercase
 * Return: 1 if c is uppercase, 0 otherwise
 */

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
