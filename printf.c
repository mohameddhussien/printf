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

	while (format[i] != '\0')
	{
		
		if (format[i] == percent)
			get_print_func();
		i++;
	}
	return (0);
}
