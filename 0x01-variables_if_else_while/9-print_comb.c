#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numers to 9 with a comma'
 * Return: Always 0
 */
int main(void)
{
	int n = 0;


	for (n = '0'; n <= '9'; n++)
	{
		if (n != '9')
		putchar(n);
	{
		putchar(',');
		putchar(' ');
	}
	n++;
	}
	putchar('\n');
	return (0);
}
