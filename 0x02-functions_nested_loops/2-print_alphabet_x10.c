#include "main.h"
/**
 *print_alphabet- printing alphabets ten times
 *Return:void
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
