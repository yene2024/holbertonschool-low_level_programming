#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * *string_toupper - function that changes all lowercases
 * @str: string to uppercase
 * Return: str
 */

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
