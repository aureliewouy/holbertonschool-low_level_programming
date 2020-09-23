#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n, first, last, rev;

do
  {


for (n = 0; n < 100; n++)
{
if ((n / 10) == (n % 10))
{
continue;
}
last = n % 10;
first = n / 10;
rev = last * 10 + first;
if ( rev)
{
putchar('k');
}
putchar((n / 10) + '0');
putchar((n % 10) + '0');
if (n != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
