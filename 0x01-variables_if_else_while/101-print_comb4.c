#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int t;
	int m;
	int p;

	for (t == 0; t < 8; t++)
	{
		for (m = t + 1; m < 9; m++)
		{
			for (p = m + 1; p < 10; p++)
			{
				putchar((t % 10) + '0');
				putchar((m % 10) + '0');
				putchar((p % 10) + '0');

				if (t == 7 && m == 8 && p == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
