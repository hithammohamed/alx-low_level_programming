#include "main.h"
/**
 * main - Task from ALX
 *
 * This code prints the letters of the English alphabet.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

