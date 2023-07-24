#include "main.h"

/**
 * print_char - Function to treat next argument
 * as a charcter.
 * @args: arguments.
 *
 * Return: 0 - 1.
 */

int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	_putchar(ch);
	va_end(args);
	return (1);
}
