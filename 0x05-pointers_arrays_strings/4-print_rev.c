#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @string: it is a pointer to the string
 */
void print_rev(char *string)
{
	int i, length;

	length = strlen(string);
	for (i = length - 1; i >= 0 && *(string + i) != '\n'; --i)
		_putchar(*(string + i));
	_putchar('\n');
}
