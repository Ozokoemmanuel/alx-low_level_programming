#include "main.h"

/**
 * main - Entry
 *
 * Return: Always 0 (Success);
 */
void print_alphabet_x10(void)
{
	char letter;
	char X;

	for (X = 1; X <= 10; X++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
	}
	return;
}
