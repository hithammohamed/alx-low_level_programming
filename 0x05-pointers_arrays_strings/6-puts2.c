#include "main.h"

/**
 * puts2 - The code prints even numbers
 *
 * @str: string parameters input
 *
 * Return: Nothing
**/

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; ++s)
	{
		if (s % 2 == 0)
			putchar(str[s]);
	}
	putchar('\n');
}
