#include "shelly.h"
/**
 * _strchr - locates a character in a string.
 * @str: arg 1
 * @c: arg 2
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *str, char c)
{
	int a = 0;

	for (; str[a] >= '\0'; a++)
	{
	if (str[a] == c)
	{
		return (&str[a]);
	}
	}
	return (0);
}

/**
 * _strtok - tokenizes a string
 * @str: string to be tokenized
 * @c: delim
 * Return: a pointer to the tokens
*/
char *_strtok(char *str, char *c)
{
	if (!c)
		return (NULL);
	static char *ms_buff;

	if (str)
		ms_buff = str;
	else
		if (!ms_buff || !*ms_buff)
			return (NULL);

	char *ms_token = ms_buff;
	int i = 0, len = _strlen(c);

	while (*ms_buff && i != len)
	{
		i = 0;

		while (*ms_buff && *ms_buff != *c)
			ms_buff++;
		while (ms_buff[i] == c[i] && i < len)
			i += 1;
		if (i == len)
			*ms_buff = 0, ms_buff += len;
		else
			ms_buff++;
	}
	return (ms_token);
}
