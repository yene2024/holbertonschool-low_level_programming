#include "main.h"
#include <stdio.h>

/**
 *swap_int - function that swaps the value
 *@a:first integer
 *@b:second integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
