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
	int i = 0;
	char percent = 37;
	va_list vars;
	int (*func_call)(va_list);

	while (format[i] != '\0')
	{
		if (format[i] == percent)
		{
			func_call = get_print_func(format[i + 1], vars);
			if (func_call == NULL)
				return (1);
			func_call(vars);
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (0);
}
