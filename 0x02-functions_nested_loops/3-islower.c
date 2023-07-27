#include "main.h"
/**
 * _islower - Shows 1 if input is lowercase character. Another case shows 0
 *
 * @c: is the int used as an argument in the fuction
 *
 * Return: 1 for lowercase character and 0 for the rest
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
	_putchar('\n');
}
