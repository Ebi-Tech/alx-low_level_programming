#include "main.h"
/**
 *main - Entry point
 *print_alphabet - prints the english alphabet from a-z.
 * Return: 0
 */
int main(void)
{
	void print_alphabet(void);

	int c = 'a';

	void _putchar(int);

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
