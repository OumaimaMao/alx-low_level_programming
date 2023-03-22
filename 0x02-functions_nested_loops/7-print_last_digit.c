#include "main.h"
/**
 * print_last_digit - print the last digit of number
 * @n: the number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
		_putchar(digit + '0');
	return (digit);
}
