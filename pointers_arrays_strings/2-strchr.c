#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locate a character in a string.
 * @s: The string to search.
 * @c: The character to locate in the string.
 *
 * Return: A pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}

