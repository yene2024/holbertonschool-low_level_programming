#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that appends the src
 * @dest:adds a terminating null byte
 * @src:function appends
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *first_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (first_dest);
}
