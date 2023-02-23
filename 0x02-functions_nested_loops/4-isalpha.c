#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 (positive), 0 (negative)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
