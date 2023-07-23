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
	int i = 0;
	char ch;

	va_start(args, 1);
	ch = va_arg(args, char);
	_putchar(ch);
	
}
