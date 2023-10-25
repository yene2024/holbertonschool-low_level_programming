#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copy a string from src to dest with a length limit
 * @src: not need to be null
 * @dest:coppies a string
 * @n:function should work exactly like strncpy
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *first_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (first_dest);
}

