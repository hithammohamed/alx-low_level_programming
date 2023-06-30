#include "main.h"

/**
 * _strcmp - compares tow strings
 *
 * @s1: type of string 1
 * @s2: type of string 2
 *
 * Return: 1 if true, 0 if false
**/

int _strcmp(char *s1, char *s2)
{
	int hello = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			hello = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}

