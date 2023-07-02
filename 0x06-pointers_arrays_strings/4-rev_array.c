#include "main.h"

/**
 * reverse_array - reverse the content of an array of inteagers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
**/

void reverse_array(int *a, int n)
{
	int i, g, t;

	for (i = 0, g = (n - 1); i < g; i++, g--)
	{
		t = a[i];
		a[i] = a[g];
		a[g] = t;
	}
}
