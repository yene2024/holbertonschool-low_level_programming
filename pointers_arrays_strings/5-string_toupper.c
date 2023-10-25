#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * *string_toupper - function that changes all lowercases
 * @str: string to uppercase
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
