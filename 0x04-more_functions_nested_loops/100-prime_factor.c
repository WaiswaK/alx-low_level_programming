/**
 * main-  largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	unsigned int long n = 612852475143;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			n /= i;

	}
	return (0);
}
