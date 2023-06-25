#include "main.h"

/**
 * print_numbers - print 0 - 9
 *            only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int numbers = 0;

	do {
		_putchar(numbers + 48);
		numbers++;
	} while (numbers >= 0 && numbers <= 9);
	_putchar('\n');
}
