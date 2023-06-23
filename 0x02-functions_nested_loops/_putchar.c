#include <unistd.h>
#include "main.h"

/**
 * _putchar -Type the characters to be printed
 *
 * Return: always 0 success.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
