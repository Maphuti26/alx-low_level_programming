#include "main.h"

/**
*_strlen - computes length of a string
*@s: the string
*Return: the length
*/
int _strlen(char *s);

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
