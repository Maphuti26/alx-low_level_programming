#include "main.h"
#include <stdlib.h>

/**
 * _abs - get the absolute value of integer
 * @n: the checked integer
 * Return: the absolute value
 */
int _abs(int n)
{
        int r = abs(n);

        return (r);
}
root@89f28fd85ed6:/alx-low_level_programming/0x09-static_libraries# cat 9-strcpy.c
#include "main.h"
#include <string.h>

/**
 * _strcpy - The function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: a pointer of the destination
 * @src: a pointer of the source string
 * Return: a char
 */
char *_strcpy(char *dest, char *src)
{
        return (strcpy(dest, src));
}
