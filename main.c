#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;
	char ch = 'H';

	len1 = printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Let's try to printf a simple sentence.\n");
	printf("%i\n%i\n", len1, len2);
	len2 = _printf("My name starts with: %c\n", ch);
	printf("%i\n", len2);
	len2 = printf("My name starts with: %c\n", ch);
	printf("%i\n", len2);
	return (0);
}
