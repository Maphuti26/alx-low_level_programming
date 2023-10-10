#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i  = 0;
	char l;

	while (i < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
