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
	unsigned int count = 0;
	 int found, i;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				break;
			}
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
