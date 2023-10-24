#include "main.h"
#include <stdio.h>
/**_strcpy - copies the string pointed to by src
*including the terminating null byte (\0)
*to the buffer pointed to by dest
*@dest: pointer to the buffer in which we copy the string
*@src: string to be copied
*
*Return: the pointer to dest
*/


int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
