#include "main.h"

/**
 * *string_toupper - The function changes all lowercase letters
 *                 to uppercase
 *
 * @str: string to return
 * Return: string.
 *
**/

char *string_toupper(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] = str[c] - 32;
		}
	}
	return (str);
