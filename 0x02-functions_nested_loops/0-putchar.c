#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar", followed by a new line
 *
 * return: 0 (Success)
 */

int main(void)
{
	char output[] = "_putchar\n";
	int i;
	
	for (i=0; output[i] != '\0'; i++)
	{
		_putchar(output[i]);
	}

	return (0);
}
