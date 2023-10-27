#include "main.h"
#include <stdio.h>
/**
 * _strstr - unction finds the first occurrence of the substring
 * @haystack: function that provides a standar library.
 * @needle: input
 **/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
