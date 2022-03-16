#include "main.h"
/**
 * prints the alphabet in lowercase.
 */
void print_alpabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar ('\n');
}
