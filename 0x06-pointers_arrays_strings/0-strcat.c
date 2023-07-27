#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: char value
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
