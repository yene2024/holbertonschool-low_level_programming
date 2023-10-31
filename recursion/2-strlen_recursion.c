#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - calculate the length of a string.
 * @s:the string to count
 * Return: the length of a string.
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}


