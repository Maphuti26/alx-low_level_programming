#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first pointer
 * @b: the second pionter
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a; /* save the value temporary variable*/
	*a = *b;
	*b = m;
}
