#include "main.h"

/**
 * print_line - Draws a staight line
 *
 * @n: Number of times _ is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
