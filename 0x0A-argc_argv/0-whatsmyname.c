#include "main.h"
#include <stdio.h>

void prints_string(char *s);
/**
 * main - Prints its name
 * @argc: Length of argv
 * @argv: Arrays of strings of the program arguments
 * Return: 0, Success
 */
int main(int argc __attribute__((unused)), char *argv[])

{

	prints_string(argv[0]);

	putchar('\n');

	return (0);

}
/**
 * prints_string - Prints all char of a string
 * @s: Pointer to string
 * Return: void
 */

void prints_string(char *s)

{

	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
			i++;								}
}
