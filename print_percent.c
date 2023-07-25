#include "main.h"

/**
 * print_percent - Function to print percent.
 * @arg: argument list.
 *
 * Return: 1
 */

int print_percent(va_list arg)
{
	char ch = '%';

	(void)arg;
	_putchar(ch);
	return (1);
}
