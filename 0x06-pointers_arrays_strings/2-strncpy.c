#include "main.h"

/**
 * _strncpy - The code copies a strings
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 *
**/

char *_strncpy(char *dest, char *src, int n)
{
	int h;

	for (h = 0; h < n && src[h] != '\0'; h++)
		dest[h] = src[h];

	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}

	return (dest);
}
