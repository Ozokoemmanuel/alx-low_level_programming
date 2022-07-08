#include "main.h"
/**
 * _isupper - Check if a letter is uppercase
 * @c: The character to check
 * Return: 1 if the letter is uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else 
		return (0);
}
