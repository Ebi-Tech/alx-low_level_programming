#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int tens, ones, h, t;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (h = tens; h <= '9'; h++) /*print second of pair*/
			{
				for (t = ones + 1; t <= '9'; t++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(h);
					putchar(t);

					if (!((tens == '9' && ones == '8') && (h == '9' && t == '9')))
					{
						putchar(',');
						putchar(' ');
					}
					t = '0';
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

