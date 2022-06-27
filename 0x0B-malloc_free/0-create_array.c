#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @c: Character to initialize the array with
 * @size: size of array to be initialized
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;
	return (m);
}
