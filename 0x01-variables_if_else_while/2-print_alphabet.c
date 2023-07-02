#include <stdio.h>

/**
 * main - enter point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	char sh = 'a';

	while (sh <= 'z')
	{
		putchar(sh);
		sh++
	}
	putchar('\n');

	return (0);
}
