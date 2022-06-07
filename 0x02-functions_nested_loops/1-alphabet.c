#include "main.h"
/**
 *print_alphabet - prints the english alphabet from a-z.
 * Return: 0
 */
void print_alphabet(void)
{
	int c = 'a';

	void _putchar(int);

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
