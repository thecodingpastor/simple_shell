#include "main.h"
/**
 * main - an attempt to mimic UNIX shell program
 * @argc: arg 1
 * @argv: arg 2
 * Return: 0 on success, -1 on error
 */
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	ssize_t numCharsRead;
	char *prompt = "$ ";
	char *linePointer = NULL, *linePointerCP = NULL;
	size_t lineSize = 0;

	while (true)
	{
		printf("%s", prompt);
		numCharsRead = getline(&linePointer, &lineSize, stdin);

		if (numCharsRead == -1)
		{
			printf("Exiting...\n");
			return (-1);
		}
		printf("%s\n", linePointer), free(linePointer);
	}
	return (0);
}
