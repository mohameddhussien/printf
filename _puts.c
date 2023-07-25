#include "main.h"

/**
 * _puts - Function to print a string..
 * @str: Address parameter.
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		++i;
	}
}
