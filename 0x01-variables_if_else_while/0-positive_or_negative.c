#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - enter point
 *
 * Description: Test the number is it positive or negative or zero
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is Zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
