#include "main.h"
#include <stdio.h>

/**
 * rev_string - Print a string in reverse
 *
 * @s: Type char pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	int rev;

	for (a = 0; s[a] != 0; a++)
	{
	}
	b = 0;
	a = a - 1;
	while (b < a)
	{
		rev = s[a];
		s[a] = s[b];
		s[b] = rev;
		b++;
		a--;
	}
}
