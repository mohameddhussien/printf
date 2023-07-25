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
	char *symbol;
	int (*func)();
} specifier_t;

int _putchar(char ch);
int _strlen(char *s);
int _printf(const char *format, ...);

int get_print_func(char *s, va_list vars);

int print_char(va_list args);
int print_string(va_list arg);
int print_percent(void);
int print_int(va_list args);
int print_dec(va_list args);

#endif
