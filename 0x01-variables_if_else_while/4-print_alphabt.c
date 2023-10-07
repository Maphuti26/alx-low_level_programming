#include <stdio.h>

/**
 * main - prints all Alphabets but q and e.
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
