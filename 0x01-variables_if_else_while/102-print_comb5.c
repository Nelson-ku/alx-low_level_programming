#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers hould range from 0 to 99.
 * The two numbers should be separated by a space.
 * Return: 0
 */
int main(void)
{
	int x, y;
	int a, b, c, d;

	for (x = 0; x < 100; x++)
	{
		a = x / 10; /* double numbers */
		b = x % 10; /* single numbers */		
		for (y = 0; y < 100; y++)
		{
			c = y / 10; /* double numbers */
			d = y % 10; /* single numbers */
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
					if (!(a == 9 && b == 8))
					{
						putchar(44);
						putchar(32);
					}
			}
		}
	}
	putchar(10);
	return (0);
}
