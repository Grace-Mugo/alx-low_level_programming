#include "function_pointers.h"

/**
 * print_name - prints a name using pointer to function
 * @name: string
 * @f: function pointer
 *
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

