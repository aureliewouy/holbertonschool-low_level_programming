#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  long int n, nn;
for (n = 0; n < 100; n++)
{
if ((n / 10) == (n % 10))
{
continue;
}
 nn = n +1;
if (((n / 10) * (n % 10)) == ((nn / 10) * (nn % 10)))
   {
     if ( n < nn)
       { 
     putchar((n / 10) + '0');
     putchar((n % 10) + '0');
       }
   }
 
if (n != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
