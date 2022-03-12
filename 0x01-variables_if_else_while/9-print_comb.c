#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - print all single digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
