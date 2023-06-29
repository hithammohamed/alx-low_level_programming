#include "main.h"

/**
 * _atoi - converts a string to an intrger
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
**/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sing = 1;

	do {
		if (*S == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
