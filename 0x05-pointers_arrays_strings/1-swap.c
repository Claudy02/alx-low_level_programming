#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;

	*a = c;
	*b = d;
}
