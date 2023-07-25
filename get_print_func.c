#include "main.h"

/**
 * get_print_func - Get required function.
 * @s: input specifier.
 * @vars: list of arguments.
 *
 * Return: pointer to the address of the function
 * to be excuted.
 */

int get_print_func(char *s, va_list vars)
{
	specifier_t check_spec[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
		{"%i", print_int},
		{"%d", print_dec},
		{NULL, NULL}
	};
	int i = 0;

	while (check_spec[i].symbol)
	{
		if (check_spec[i].symbol[0] == s[0] && check_spec[i].symbol[1] == s[1])
			return (check_spec[i].func(vars));
		i++;
	}
	return (0);
}
