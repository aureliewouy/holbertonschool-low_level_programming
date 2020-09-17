#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int ch = 123456789;
for (ch = 0; ch < 10; ch++)
{
putchar((ch) + '0');
}
putchar('\n');
return (0);
}
