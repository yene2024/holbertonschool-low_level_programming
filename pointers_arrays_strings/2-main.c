#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 *@s:length of a string
 * Return: return the length of a string.
 */

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
