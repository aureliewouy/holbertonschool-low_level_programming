#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n, n1, n2;
for (n = 0; n < 100; n++)
{
n1 = ((n / 10) + '0');
n2 = ((n % 10) + '0');
if (n1 != n2 && n1 < n2)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
if (n != 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
