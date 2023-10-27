#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search a string for any set of bytes.
 * @s: input
 * @accept: input
 * Return: A pointer to the byte in 's' that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
		if (s[i] == accept[n])
			return (s + i);
		}
	}
	return (NULL);
}
