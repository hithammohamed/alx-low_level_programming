#include "main.h"

/**
 * swap_int - swaps the vslues of tow numbers
 *              using two inputs parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
**/

void swap_int(int *a, int *b)
{
	int valus;

	valus = *a;
	*a = *b;
	*b = valus;
}
