#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 *
 * @a: int pointer
 * @b: int pointer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = c;
	*a = *b;
	*b = c;
}
