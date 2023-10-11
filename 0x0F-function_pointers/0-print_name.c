#include "function_pointers.h"

/**
 * print_name - prints a name using function pointers
 *
 * @name: Pointer to name
 * @f: Function pointer
 * @char: Input parameter to print_name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
