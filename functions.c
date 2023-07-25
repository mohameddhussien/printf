#include "main.h"

/**
 * print_char - Function to treat next argument
 * as a charcter.
 * @arg: arguments.
 *
 * Return: 0 - 1.
 */

int print_char(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	_putchar(s);
	return (1);
}

/**
 * _strlen - Function to get string length.
 * @s: Address parameter.
 *
 * Return: string length.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
		++i;
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
		return (_strlen(str));
	}
	_puts(str);
	return (_strlen(str));
}

/**
 * print_percent - Function to print percent.
 *
 * Return: 1
 */

int print_percent(void)
{
	_putchar('%');
	return (1);
}
