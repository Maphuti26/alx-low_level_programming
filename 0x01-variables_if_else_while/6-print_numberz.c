#include <stdio.h>

/**
 * main - prints all the single numbers using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');

		i++;
	}
	putchar('\n');

	return (0);
}
