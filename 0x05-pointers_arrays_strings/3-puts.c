#include "main.h"

/**
 * _puts - Prints a string
 * @str: string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
