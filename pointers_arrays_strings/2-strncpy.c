#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copy a string from src to dest with a length limit
 * @src: input value
 * @dest:coppies a string
 * @n: input value
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
