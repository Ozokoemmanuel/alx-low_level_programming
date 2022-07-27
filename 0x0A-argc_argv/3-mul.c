#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * @argc: argument count
 * @argv: argumeng vector
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		print_num(multiply_two_nums(atoi(argv[1]), atoi(argv[2])));
		putchar('\n');
		return (0);
	}
	else
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		return (0);
	}
}

/**
 * atoi - Convert a number in a string to an integer
 * @str: String to be converted
 * Return: Integer converted OR (0) if none
 */

int atoi(char *str)
{
	int sign_cache = 1;
	int result = 0;

	while (str[0] != '\0')
	{
		if (str[0] == '-')
			sign_cache *= -1;
		else if (str[0] >= '0' && str[0] <= '9')
			result = (result * 10) + (str[0] - '0');
		else if (result)
			break;
		str++;
	}
	return (result * sign_cache);
}

/**
 * multiply_two_nums - Multiplies two numbers
 * @num1: A number
 * @num2: A number
 * Return: Result of num1 * num2
 */

int multiply_two_nums(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * print_num - Prints numbers chars
 * @n: Integers params
 * Return: 0
 */

void print_num(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_num(n1 / 10);

	}
	putchar((n1 % 10) + '0');
}
