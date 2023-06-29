#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
**/

void rev_string(char *s)
{
	int m, z;
	char str;

	/*Count and memorize letters without null char*/
	for (m = 0; s[z] != '\0'; ++m)
		;

	/*swap the string by looping to half the string*/
	for (z = 0; z < m / 2; z++)
	{
		str = s[z];
		s[z] = s[m - 1 - z];
		s[m - 1 - z] = str;
	}
}
