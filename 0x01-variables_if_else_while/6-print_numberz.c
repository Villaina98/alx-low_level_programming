#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0 (success)
 */

int main(void)
{
	int s = 0, e = 9;

	while (s <= e)
	{
		putchar (s + '0');
		s++;
	}
	putchar('\n');
	return (0);
}
