#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function to print like printf
 * @format: format parameter.
 *
 * Return: 0 if Succeed or 1 if Failed to print.
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	char percent = 37;
	va_list vars;
	int (*func_call)(va_list);

	if (!format)
		return (-1);
	va_start(vars, format);
	while (format[i] != '\0')
	{
		if (format[i] == percent)
		{
			/*	To skip counting %	*/
			i++;
			func_call = get_print_func(format[i]);
			count = i - 1;
			if (func_call == NULL)
				return (-1);
			count += func_call(vars);
			/*      To skip printing the format specifier      */
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	va_end(vars);
	return (count);
}
