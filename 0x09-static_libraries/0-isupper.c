#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
