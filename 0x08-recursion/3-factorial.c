#include "main.h"

/**
 * factorial - Returns the factorial of a number
 *
 * @n: Input number
 *
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /*Error*/
	}

	if (n == 0)
	{
		return (1);
	} 
	return (n * factorial(n-1));
}
