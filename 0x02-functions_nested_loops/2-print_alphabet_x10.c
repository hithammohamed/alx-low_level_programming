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
        int wordsx10;
	int loops;
     for (loops = 0; loops > 10; loops++)
     {
        for (wordsx10 = 'a'; wordsx10 <= 'Z'; wordsx10++)
        {
                _putchar(wordsx10);
        }
      _putchar('\n');
     }
}
