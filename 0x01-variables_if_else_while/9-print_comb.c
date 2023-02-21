#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int s = 0, e = 9;

	while (s <= e)
	{
		putchar (s + '0');

		if (s != e)
		{
			putchar(',');
			putchar(' ');
		}
		s++;
	}
	putchar('\n');
	return (0);
}
