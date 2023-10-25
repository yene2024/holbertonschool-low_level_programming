/**
 * reverse_array - function that reverse the content
 * @a: an array of integers
 * @n: the number of elements to array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

