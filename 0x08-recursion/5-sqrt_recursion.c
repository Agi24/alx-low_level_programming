#include "main.h"
/**
 * _sqrt - finds the natural square root of an inputed number.
 * @nm: the number to find the square root of.
 * @r: the root to be tested.
 * Return: if the number has a natural sqaure root - the square root.
 * if the number does not have a natural square root - - 1.
 */
int _sqrt(int nm, int r)
{
	if ((r * r) == nm)
		return (r);
	if (r == nm / 2)
		return (-1);
	return (_sqrt(nm, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to return the square root of .
 * Return: if n has a natural square root - the natural square root of n.
 * if n does not have a natural square root - - 1.
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, r));
}
