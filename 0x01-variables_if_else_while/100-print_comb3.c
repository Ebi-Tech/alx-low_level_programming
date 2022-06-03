#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int t;
	int o;

	for (t = '0'; t <= '9'; t++) /*print t places*/
	{
		for (o = '0'; o <= '9'; o++) /*print o places*/
		{
			putchar(t);
			putchar(o);
			if (!(t == '9' && o == '9')) /*skip comma at end*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
