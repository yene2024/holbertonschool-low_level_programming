#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 *@s:length of a string
 * Return: return the length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
