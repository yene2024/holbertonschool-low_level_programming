#include "main.h"

/**
 * _islower - writing a function that check lowercase
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
