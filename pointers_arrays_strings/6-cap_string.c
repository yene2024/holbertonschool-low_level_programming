#include "main.h"
#include <stdio.h>

/**
* cap_string - Capitalizes all words of a string.
* @s: string to be capitalized
* Return: string
*/
	char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			char tmp;

			tmp = s[i - 1];
			if (tmp == '\t' || tmp == '\n')
				s[i] = s[i] - 32;
			if (tmp == '{' || tmp == '}')
				s[i] = s[i] - 32;
			if (tmp == '(' || tmp == ')')
				s[i] = s[i] - 32;
			if (tmp == ',' || tmp == '.' || tmp == ';')
				s[i] = s[i] - 32;
			if (tmp == '?' || tmp == '!')
				s[i] = s[i] - 32;
			if (tmp == ' ' || tmp == '"')
				s[i] = s[i] - 32;
			if (i == 0)
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
