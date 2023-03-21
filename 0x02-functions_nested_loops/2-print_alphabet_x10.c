#include "main.h"

/**
 * alphabet - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char r;
	int i = 0;

while (i < 10)
{
	for (r = 'a'; r <= 'z'; r++)
	{

		_putchar(r);
	}
	_putchar('\n');
	i++;
	}
}
