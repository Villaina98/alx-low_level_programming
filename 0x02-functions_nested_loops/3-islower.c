#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 (positive), or 0(negative)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
