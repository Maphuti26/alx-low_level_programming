#include "main.h"

/**
 * reverse_array - a function that reveser the content of an array.
 * @a: a pointer to array of integers
 * @n: the number of the elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *left = a;
	int *right = a + n - 1;

	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;
	}
}
