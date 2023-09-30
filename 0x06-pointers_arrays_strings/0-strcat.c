#include "main.h"

/**
 * *_strcat - Concatenates two strings
 *
 * @*dest: Pointer to dest
 * @*src: Pointer to src
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	dest = *dest + *src;
	*ptr = &dest;

	_putchar(*ptr);
}
