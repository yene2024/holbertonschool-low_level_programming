#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer.
 *@i: computes absolute value
 * Return: integer i positive if bigger than 0, return negative otherwise.
 */

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
