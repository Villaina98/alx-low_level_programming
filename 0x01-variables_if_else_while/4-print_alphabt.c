#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	int s = 97, e = 122;

	while (s <= e)
	{
		if (s != 'q' && s != 'e')
			putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
