#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/**
 *
 *
 */

typedef struct specifier
{
	char symbol;
	int (*func)(va_list);
} specifier_t;

int _putchar(char ch);
int _printf(const char *format, ...);

#endif
