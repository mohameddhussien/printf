#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - Struct of specifiers and their functions.
 * @symbol: %c, %s, %i, %d and %%
 * @func: The corresponding functions to excute.
 *
 * Description: Choose specific symbol to activate it's
 * function.
 */

typedef struct specifier
{
	char symbol;
	int (*func)(va_list);
} specifier_t;

int _putchar(char ch);
int _printf(const char *format, ...);

int (*get_print_func(char in_spec))(va_list);

int print_char(va_list args);

#endif
