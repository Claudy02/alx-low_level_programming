#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of times
 * Return: char value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		dest[i] = src[i];
	}
	return (dest);
}
