#include <stdio.h>
/**
* main - prints the alphabet in lowercase.
*
* Return: 0 on success
*/
int main(void)
{
char y = 'a';
while (y <= 'z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
