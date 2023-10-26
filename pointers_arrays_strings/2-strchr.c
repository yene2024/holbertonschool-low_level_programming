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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}

