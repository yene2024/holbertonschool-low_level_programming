#include "main.h"

/**
 * print_array - function that print element of an array
 *@a:numbers integers
 * @n:number of elements of the array to be printed
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
