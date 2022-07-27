#include "main.h"
#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: Length of @argv, integer
 * @argv: Array of strings of the arguments of this program
 * Return: 0, success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print_array(argv[i]);
		putchar('\n');
	}
	return (0);
}

/**
 * print_array - Prints all char of a string
 * @s: Pointer to string
 * Return: void
 */

void print_array(char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
