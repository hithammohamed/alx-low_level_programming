#include "main.h"
/**
 * main - Task from ALX
 *
 * This code prints the letters of the English alphabet.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int words;

	for (words = 'a'; words <= 'Z'; words++)	
		_putchar(words);
	
	_putchar('\n');
}
