#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	int a = 1;

	int b = 2;

	printf("%d, ", a);
	printf("%d, ", b);
	for (int i = 3; i <= 50; i++)
	{
		int n = a + b;

		if (i == 50)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
		}
		a = b;

		b = n;

	}
}
