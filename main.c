#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
/*
	int len1, len2;
*/	char ch = 'a', ch2 = '\0';
	char* str = "Mohamed hussien";

/*	str = NULL;*/
	(void)ch;
/*


	len1 = printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Let's try to printf a simple sentence.\n");
	printf("%i\n%i\n", len1, len2);
	len2 = _printf("My name starts with: %c %c\n", ch, ch2);
	printf("%i\n", len2);
	len2 = printf("My name starts with: %c %c\n", ch, ch2);
	printf("%i\n", len2);
*/
	_printf("string: %s%%\n", str);
	_printf("character: %c\n", ch2);
	return (0);
}
