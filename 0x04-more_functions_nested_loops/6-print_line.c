#include "main.h"

/**
 * print_line - Entry point
 *@n: number of times to print '_'
 * Return: no return
 */
void print_line(int n)
{
int i;
for (i = 0;  i < n; i++)
if (i > 0)
{
_putchar('_');
}
else if (n++ == i)
{
_putchar('_');
}
else if (n < 0)
{
_putchar('\n');
}
_putchar('\n');
}
