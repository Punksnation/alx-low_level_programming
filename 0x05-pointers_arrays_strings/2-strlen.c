#include "main.h"

/**
 * _strlen - returns the length of a string
 * @count: string
 * Return: the length of a string
 */

int _strlen(char *count)
{
	int i;

	i = 0;
	while (*count != '\0')
	{
		count++;
		i++;
	}
	return (i);
}
