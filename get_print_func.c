#include "main.h"

/**
 * get_print_func - Get required function.
 * @in_spec: input specifier.
 *
 * Return: pointer to the address of the function
 * to be excuted.
 */

int (*get_print_func(char in_spec))(va_list)
{
	specifier_t check_spec[] = {
		{'c', print_char},
/*		{'s', print_string},*/
/*		{'%', print_percent},*/
		{'\0', NULL}
	};
	int i = 0;

	while (check_spec[i].symbol != '\0')
	{
		if (check_spec[i].symbol == in_spec)
			return (check_spec[i].func);
		i++;
	}
	return (NULL);
}
