#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all numbers from 0 - 9
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
