#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function check digit
 *@c: is a digit.
 * Return: 1 if c is a digit, 0 otherwise
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
