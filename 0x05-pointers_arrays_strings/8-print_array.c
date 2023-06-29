#include "main.h"
/**
 * print_array - prints n elements of an array op integers
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return nothing
 *
**/

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != (n - 1))
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	}
	printf("\n");
}
