#include "main.h"

/**
 * _isupper - The code tests letters and recognizes capital letters
 *
 * @c: input for alphabet
 *
 * Return: 1 if its upprtcasr, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
