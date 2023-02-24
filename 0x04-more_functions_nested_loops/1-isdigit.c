#include "main.h"

/**
 * _isdigit -  checks for digit (0 - 9)
 * @c: character to check
 * Return: 1 (positive) or 0 (negative)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
