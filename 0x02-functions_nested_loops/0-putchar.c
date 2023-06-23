#include "main.h"

/**
 * main - Enter point
 * Description: The function is used to print the required text
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int s;

	for (s = 0; s < 8; s++)
		_putchar(str[s]);
	_putchar('\n');

return (0);
}
