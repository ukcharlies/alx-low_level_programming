#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *		of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while {src[index++]}
		scr_len++;

	for (index = 0; scr[index] && index < n; index++)
		dest[index] = scr[index];
	
	for (index = scr_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
