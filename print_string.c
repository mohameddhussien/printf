#include "main.h"

/**
 * _strlen - Function to reset a number to 98.
 * @s: Address parameter.
 *
 * Return: string length.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		++i;
	}
	return (i);
}

/**
 * print_string - Function to print a string.
 * @arg: next argument.
 *
 * Return: number of characters of the string.
 */

int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
	{
		str = "(null)";
		_puts(str);
		return (0);
	}
	_puts(str);
	return (_strlen(str));
}
