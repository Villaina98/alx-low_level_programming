#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main -  print last digit of number stored in variable n
 * Return: 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;

	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	}
	else if (lastNum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	}
	else if (lastNum < 6 && lastNum != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	}
	/* your code goes there */
	return (0);
}
