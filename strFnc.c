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

int _atoi(char *str)
{
	int result = 0, sign = 1, i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	i++;
	if (str[i] == '-')
	sign = -1, i++;
	else if (str[i] == '+')
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	result = result * 10 + (str[i] - '0'), i++;

	return (result * sign);
}

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0')
	dest[i] = src[j], j++, i++;
	dest[i] = '\0';
	return (dest);
}
