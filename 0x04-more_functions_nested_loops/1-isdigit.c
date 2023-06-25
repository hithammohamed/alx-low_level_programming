#include "main.h"

/**
 * _isdigit - The code detects the c that falls between the required range
 *
 * @c: input for numbers
 *
 * Return: 1 if its number between 0 to 9, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
