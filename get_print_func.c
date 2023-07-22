#include "main.h"

/**
 * get_print_func
 *
 *
 */

int (*get_print_func (char in_spec, va_list vars))(va_list)
{
	specifier_t check_spec = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	}
	int i = 0;

	while (1)
	{
		if (check_spec[i].symbol == in_spec)
		{
			check_spec[i].func;
			return (0);
		}
		i++;
	}
	return (-1);
}
