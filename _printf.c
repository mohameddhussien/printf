#include "main.h"

/**
 * _printf - Function to print like printf
 * @format: format parameter.
 *
 * Return: 0 if Succeed or 1 if Failed to print.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	char percent = 37;
	char ch[] = {0, 0};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		if (format[i] == percent)
		{
			ch[0] = format[i];
			ch[1] = format[i + 1];
			count += get_print_func(ch, args);
			i = i + 2;
			goto Here;
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
