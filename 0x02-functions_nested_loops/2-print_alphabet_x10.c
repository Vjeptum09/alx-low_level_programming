#include "main.h"
/**
 * print_alphabet_x10 - printing alphabets ten times
 *
 * Returns: void
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (j = 1; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
