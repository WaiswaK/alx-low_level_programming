#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * Description: A function that prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
