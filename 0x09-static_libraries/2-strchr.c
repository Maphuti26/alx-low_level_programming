#include "main.h"

/**
*_strchr - search the first occurence of the character c
*@s: string to be scanned
*@c: character to be searched
*
*Return: return pointer to the first occurance
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
