#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x, b, c;
b = 'b';
c = 'c';
for (x = 'a'; x <= 'z'; x++)
{
if (x != b && x != c)
putchar(x);
}
putchar('\n');
return (0);
}
