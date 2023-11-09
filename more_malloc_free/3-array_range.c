#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 * Return: the pointer to the newly created array
 **/

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
