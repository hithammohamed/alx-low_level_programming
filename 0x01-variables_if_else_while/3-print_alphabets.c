#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	char lw = 'a';
	char up = 'A';

	while (lw <= 'z')
	{
		putchar(lw);
			lw++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');

	return (0);
}
