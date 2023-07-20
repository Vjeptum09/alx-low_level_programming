#include <stdio.h>
/**
 * main - Entry point
 * Description: 'numbers to base 16'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		n++;
	}
	for (m = 97; n <= 102; m++)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
