#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - print all hex chars
 * Return: 0 if successful
 */
int main(void)
{
	char hexString[] = "0123456789abcdef";
	int len = strlen(hexString);
	int i = 0;

	for (i = 0; i <= len; i++)
	{
		putchar(hexString[i]);
	}
	putchar('\n');
	return (0);
}
