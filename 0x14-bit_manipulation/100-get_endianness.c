#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
