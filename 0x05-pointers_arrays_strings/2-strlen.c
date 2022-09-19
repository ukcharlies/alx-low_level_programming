#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: string.
 * Description : a function that returns the length of a string.
 * Return: length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
