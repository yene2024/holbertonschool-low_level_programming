#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse a string
 *@s:string in reverse
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}


