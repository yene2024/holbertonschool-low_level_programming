#include "main.h"
#include <stdio.h>

/**
* leet - encode a string into 1337
* @s: string to be encoded
*Return: the resulting string;
*/

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
