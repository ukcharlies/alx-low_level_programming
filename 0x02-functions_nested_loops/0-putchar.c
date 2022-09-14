#include <stdio.h>
/**
* main - prints the string "_putchar" from a character array.
* Return: 0 on success.
*/
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(a[i]);
	}
	putchar(a[i]);
	return (0);
}
