#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit = 0;
	int second_digit;

	while (first_digit < 10)
	{
		second_digit = first_digit + 1;
		while (second_digit < 10)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			if (first_digit < 8 || second_digit < 9)
			{
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');

	return (0);
}
