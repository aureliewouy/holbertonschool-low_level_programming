#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hol[] = "Holberton\n";
	int i = 0;

	while (i < 10)
	{
		_putchar(hol[i]);
		i++;
	}
	return (0);
}
