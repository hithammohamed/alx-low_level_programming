#include "main.h"

/**
 * _strncat - The code combines two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int m, a;

	m = 0;

	while (dest[m])
		m++;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[m + a] = src[a];

	dest[m + a] = '\0';

	return (dest);
}
