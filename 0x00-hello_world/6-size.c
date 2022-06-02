#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	printf("The size of a char is: %i byte(s)\n", sizeof(char));
	printf("The size of an int is: %i byte(s)\n", sizeof(int));
	printf("The size of a long int is: %i byte(s)\n", sizeof(long int));
	printf("The size of a long long int is: %i byte(s)\n", sizeof(long long int));
	printf("The size of a float is: %i byte(s)\un", sizeof(float));
	return (0);
}
