#include <stdio.h>

/**
 * main - enter point
 *
 * Description: print a-z in reverse
 *
 * Return: always 0 (success)
**/

int main(void)
{
	char ne = 'z';

	while (ne >= 'a')
	{
		putchar(ne);
		ne--;
	}
	putchar('\n');

	return (0);
}
