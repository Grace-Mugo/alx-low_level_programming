#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: Pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a;
	int rev;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for  (a = a - 1; a >= 0; a--)
	{
		rev = s[a];
		_putchar(rev);
	}
	_putchar('\n');
}
