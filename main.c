#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;
    len2 = printf("String:[%s]\n", "I am a string !");
    len = _printf("String:[%s]\n", "I am a string !");
    
    _printf("Len:[%d]\n", len);
    _printf("Len:[%i]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
