#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password for 101-crackmd
 * Return: zero
*/

int main(void)
{
	int sum;
	char d;

	srand(time(NULL));
	while (sum <= 2645)
	{
		d = rand() % 128;
		sum += d;
		putchar(d);
	}
	putchar(2778 - sum);
	return (0);
}
