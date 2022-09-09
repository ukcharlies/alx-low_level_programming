#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, then in uppercase.
*
* Return: 0 on success
*/
int main(void)
{
char r = 'a';
char t = 'A';
while (r <= 'z')
{
putchar(r);
r++;
}
while (t <= 'Z')
{
putchar(t);
t++;
}
putchar('\n');
return (0);
}
