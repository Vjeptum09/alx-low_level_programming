#include "main.h"
/**
 * _isalpha - function checks alphabets either lower or upper cases
 *
 * @c:is the int used in arguments
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
