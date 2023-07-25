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
 * print_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int print_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
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
