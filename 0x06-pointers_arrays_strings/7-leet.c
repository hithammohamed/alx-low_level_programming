#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @c: string
 *
 * Return: string that is encoded
*/

char *leet(char *c)
{
	char *he = c;
	char kay[] = {'A', 'E', 'O', 'T', 'L'};
	char velue[] = {4, 3, 0, 7, 1};
	unsigned int l;

	while (*c)
	{
		for (l = 0; l < sizeof(kay) / sizeof(char); l++)
		{
			if (*c == kay[l] || *c == kay[l] + 32)
			{
				*c = 48 + velue[l];
			}
		}
		c++;
	}

	return (he);
}

