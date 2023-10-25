#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function that concatenates
 * @n: bytes from src
 * @src: not need to be null
 * @dest: function that concatenates two string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *first_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (first_dest);
}

