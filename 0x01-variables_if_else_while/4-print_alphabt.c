#include <stdio.h>

/**
 * main - enter point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	char ph = 'a';

	while (ph <= 'z')
	{
		if (ph == 'e' || ph == 'q')
			ph++;
		putchar(ph);
		ph++;
	}
	putchar('\n');

	return (0);
}

