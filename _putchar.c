#include <unistd.h>
#include "main.h"

/**
 * _putchar - Function to return 1 or -1 if printing a character.
 *
 * @ch: charachter to return.
 *
 * Return: Always 0 (Success)
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

