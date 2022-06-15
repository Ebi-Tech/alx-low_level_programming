#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: Pointer to the string
 */

char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - 'a' + 'A';
	index++;

	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z')
				&& (str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.' ||
					str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"' ||
					str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{' ||
					str[index - 1] == '}' || str[index - 1] == ' ' || str[index - 1] == '\t'
					|| str[index - 1] == '\n'))
			str[index] = str[index] - 'a' + 'A';
		index++;
	}
	return (str);
}
