#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @str: it is the pointer to a string
 */
void rev_string(char *str)
{
	int i, temp, len;

	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
