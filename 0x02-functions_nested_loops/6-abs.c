#include "main.h"
/**
 * _abs - Computes the absolute value
 * @n: The number to be computed
 * Return: Absolute values of number
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
			return (abs_val);
	}
	return (n);
}
