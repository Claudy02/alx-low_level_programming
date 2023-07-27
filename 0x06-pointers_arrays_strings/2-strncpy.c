#include "main.h"

/**
 * strncpy - function that copies strings
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of places to copy from
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
