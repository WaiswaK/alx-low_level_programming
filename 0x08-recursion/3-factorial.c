#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: pointer block of memory to fill
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0) /*Cater for 0*/
		return (1);
	else if (n < 0) /*Cater for values less than 0*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/
}
