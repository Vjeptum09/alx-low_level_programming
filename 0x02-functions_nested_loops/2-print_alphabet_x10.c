#include "main.h"
/**
 * print_alphabet- printing alphabets ten times
 * Return: void 
 */
void print_alphabet(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
