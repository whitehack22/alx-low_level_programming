#include <stdio.h>

/**
 * main - illustrates the array myNumbers containing 4 numbers
 *
 * Return: 0 succesfully.
 */
int main(void)
{
	int myNumbers[4];

	myNumbers[0] = 25;
	myNumbers[1] = 50;
	myNumbers[2] = 75;
	myNumbers[3] = 90;

	int i;

	for (i = 0; i < 4; i++)
	{
	printf("%d\n", myNumbers[i]);
	}
	return (0);
}
