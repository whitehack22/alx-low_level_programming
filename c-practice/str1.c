#include <stdio.h>
#include <string.h>

/**
 * main - shows the length of a string
 *
 * Return: 0 successfully.
 */
int main(void)
{
	char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("Length is:%lu\n", strlen(alphabet));
	printf("Size is: %lu\n", sizeof(alphabet));
	return (0);
}
