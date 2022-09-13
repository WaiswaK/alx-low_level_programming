#include <stdio.h>
/*
 * main - Main Program
 *
 * Description: Maom program
 *
 * PrintWord - Function to print out the word passed to it
 *
 * Description: Function to print out the passed word
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	void PrintWord(char word);
	void PrintWord(char word)
	{
		purchar(word);
		putchar('\n');
		return (0);
	}
	PrintWord('_putchar');
	return (0);
}
