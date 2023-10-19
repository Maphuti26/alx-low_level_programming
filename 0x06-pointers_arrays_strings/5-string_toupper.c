#include "main.h"

/**
 * *string_toupper - a function that changes all lower letters to upper
 *
 * @s: a pointer to the string
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
