#include "main.h"

/**
 * print_sign - Prints the sign of an integer.
 * @n: The integer to check the sign of.
 *
 * Description:
 * This function takes an integer as input and prints its sign (+, 0, or -) to
 * the standard output. It also returns 1 for positive input, 0 for zero, and
 * -1 for negative input.
 *
 * @n: The integer to check the sign of.
 *
 * Return: 1 if n is positive, 0 if n is zero, and -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
