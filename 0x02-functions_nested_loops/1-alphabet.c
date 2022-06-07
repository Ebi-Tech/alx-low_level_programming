#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: 0
 */
void print_alphabet(void)
{
	void _putchar(int);
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
