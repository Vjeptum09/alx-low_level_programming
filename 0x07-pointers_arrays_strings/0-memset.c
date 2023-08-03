#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: maximum bytes
 * @s: points to the constant
 * @b: constant
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	{
		for (n > 0; i++; n--)
		{
			s[i] = b;
		}
	}
	return (s);
}
