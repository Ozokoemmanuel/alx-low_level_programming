#include "main.h"
/**
 * print_most_numbers - To print out most numbers
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
	
		if (i == 2 || i == 4)
		{
	
			continue;
	
		}
	
		else
		{
	
		_putchar('i');
	
		}
	}
	
	_putchar('\n');
}
