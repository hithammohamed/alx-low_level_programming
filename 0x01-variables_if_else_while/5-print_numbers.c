#include <stdio.h>

/**
 * main - enter point
 *
 * Description: print all singel digit numbers
 *
 * Return: Always 0 (success)
**/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");

	return (0);
}
