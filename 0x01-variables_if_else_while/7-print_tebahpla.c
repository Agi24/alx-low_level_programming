#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all alphabets in reverse
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
