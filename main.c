#include "main.h"

/**
 * main - write a simple shell, a UNIX command line interpreter
 *
 * Return: 0 
 */

int main(int ac, char **argv)
{
	char *prompt;
	char *lineptr;
	size_t n = 0;

	prompt = "Shell$";

	printf ("%s", prompt);
	getline(&lineptr, &n, stdin);

	free(lineptr);
	return (0);
}
