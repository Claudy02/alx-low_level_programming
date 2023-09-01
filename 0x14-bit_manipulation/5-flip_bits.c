#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - a function that returns the number of bits needed for flipping
 * @n: first number
 * @m: second number
 * Return: unsigned int value of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
