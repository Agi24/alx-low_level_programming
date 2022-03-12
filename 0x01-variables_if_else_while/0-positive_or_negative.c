#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAC / 2;
	if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}
	else if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}
	else
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	return (0);
}
