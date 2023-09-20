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
