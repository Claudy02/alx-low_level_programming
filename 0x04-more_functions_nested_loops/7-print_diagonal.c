#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: value input
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
				putchar(' ');

			putchar('\\');
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
