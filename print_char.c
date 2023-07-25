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
	_putchar(va_arg(arg, int));
	return (1);
}
