#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: is a pointer
 */
void _puts(char *str)
{
        puts(str);
}
root@89f28fd85ed6:/alx-low_level_programming/0x09-static_libraries# cat 3-strcmp.c
#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: a pointer to the first string.
 * @s2: a pointer to the second string.
 *
 * Return: a negative integer or a positive integer or zero
 */
int _strcmp(char *s1, char *s2)
{

        while (*s1 != '\0' && *s2 != '\0')
        {
                if (*s1 != *s2)
                        return (*s1 - *s2);
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}
