#include <stdio.h>
#include "main.h"

/**
* _islower - Checks if a character is lowercase
* @c: a char argument
* Return: 1 if true and 0 if false
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
