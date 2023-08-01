#include "main.h"

/**
 * _memset - function that fills the memory area
 * @s: pointer
 * @b: the constant byte
 * @n: the number of times
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
