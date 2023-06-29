#include "main.h"

/**
 * puts_half - print second half of a string
 *
 * @str: char array string type
 *
 * Description: if odd number of chars, print (length - 1) / 2
**/

void puts_half(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
		;

	num++;
	for (num /= 2; str[num] != '\0'; num++)
	{
		putchar(str[num]);
	}
	putchar('\n');
}
