#include "main.h"

/**
 * print_line - prints _ n number of times
 *@n: value input
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	while (i != n)
	{
		putchar('_');
		i++;
	}
	putchar(10);
}
