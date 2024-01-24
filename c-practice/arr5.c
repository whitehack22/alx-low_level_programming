#include <stdio.h>

/**
 * main - illustrates a string greetings
 *
 * Return: 0 successfully.
 */
int main(void)
{
	char greetings[] = "Hello";
	int length = sizeof(greetings) / sizeof(greetings[0]);
	int i;

	for (i = 0; i < length; ++i)
	{
		printf("%c\n", greetings[i]);
	}
	return (0);
}
