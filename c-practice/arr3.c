#include <stdio.h>

/**
 * main - an array storing different ages
 *
 * Return: 0 successfully.
 */
int main(void)
{
	int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
	int length = sizeof(ages) / sizeof(ages[0]);
	int lowestAge = ages[0];


	for (int i = 0; i < length; i++)
	{
		if (lowestAge > ages[i])
		{
			lowestAge = ages[i];
		}
	}

	printf("The lowest age is: %d\n", lowestAge);
	return (0);
}
