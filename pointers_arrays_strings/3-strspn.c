#include "main.h"
#include <stdio.h>

/**
 * _strspn - Calculate the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
				break;
			}
		}

		if (check == 0)
		{
			break;
		}
	}
	return (value);
}
