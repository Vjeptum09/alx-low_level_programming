#include "main.h"
/**
 * print_last_digit - a function that prints the last digit
 * @n: n is an integer
 * Description: prints last digit of a number
 * Return: integer
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return  (last);
}
