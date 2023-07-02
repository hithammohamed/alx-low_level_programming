#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0,1, -9
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	int main = 0;

	while (main <= 9)
	{
		putchar(main + 48);

		if (main != 9)
		{
			putchar(',');
			putchar(' ');
		}
		main++;
	}
	putchar('\n');

	return (0);
}
