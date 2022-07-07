#include "main.h"
/**
 * main - Entry
 *
 * Return: 1 if greater than zero, -1 if less than zero otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{

		_putchar('+');
			return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
			return (-1);
	}
	else 
		_putchar('0');
	return (0);
}
