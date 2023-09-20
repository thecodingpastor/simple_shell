#include "shelly.h"
/**
 * _strlen - returns the length of a string.
 * @s: string to be processed
 * Return: Always returns an integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	length++, s++;
	return (length);
}

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
