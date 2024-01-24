#include <stdio.h>

/**
 * main - multidimensional array
 * Return: 0 successfully.
 */
int main(void)
{
	int matrix[2][3] = { {1, 4, 9}, {3, 5, 28} };
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\n", matrix[i][j]);
		}
	}
	return (0);
}
