#include <stdio.h>
/**
 * main - Entry point
 * Description: 'numbers to base 16'
 * Return: Always 0
 */
int main(void)
{
	int n;
	char low;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
