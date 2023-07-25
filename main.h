#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

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
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);

int get_print_func(char in_spec, va_list vars);

int print_char(va_list args);
int print_string(va_list arg);
int print_percent(va_list arg);

#endif
