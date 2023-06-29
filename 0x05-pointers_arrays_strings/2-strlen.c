#include "main.h"
#include <string.h>

/**
 * _strlen - It counts the number of characters of the variable value
 *                       and then returns it
 *
 * @s: string parameter input
 *
 * Return: length of value of *s
**/

int _strlen(char *s)
{
	int number;

	for (number = 0; *s != '\0'; s++)
		++number;

	return (number);
}
