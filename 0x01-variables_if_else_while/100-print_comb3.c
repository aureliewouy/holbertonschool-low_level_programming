#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  long int n, petit, grand, first, last, reverse, multiplicator;
for (n = 0; n < 100; n++)
{
if ((n / 10) == (n % 10))
{
continue;
}
 last = ((n % 10) + '0');
 first =((n / 10) + '0');
 reverse = last * 10 + first;
 multiplicator = (n / 10) * (n % 10);
 petit = n;
 grand = n+1;
 petit = petit < grand;
 if (((n / 10) * (n % 10)) == ((n / 10) * (n % 10)))
   {
     continue;
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
