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
	char *linePointer = NULL, *ms_linePointerCP = NULL;
	size_t lineSize = 0;
	char *separator = " \n";
	char *token;
	int num_of_tokens = 0;
	int count;

	while (true)
	{
		printf("%s", prompt);
		numCharsRead = getline(&linePointer, &lineSize, stdin);

		if (numCharsRead == -1)
		{
			printf("Exiting...\n");
			return (-1);
		}
		ms_linePointerCP = malloc(sizeof(char) * numCharsRead);
				if (ms_linePointerCP == NULL)
			{
				perror("memory allocation error");
				return (-1);
			}
				strcpy(ms_linePointerCP, linePointer);
				token = strtok(linePointer, separator);
				while (token != NULL)
				{
				num_of_tokens++;
				token = strtok(NULL, separator);
				}
				num_of_tokens++;
				
				argv = malloc(sizeof(char*) * num_of_tokens);
				token = strtok(ms_linePointerCP, separator);
				for(count = 0; token != NULL; count++)
				{
				argv[count] = malloc(sizeof(char) * strlen(token));
				strcpy(argv[count], token);
				token = strtok(NULL, separator);
				}
				argv[count] = NULL;

		printf("%s\n", linePointer);

		free(linePointer);
		free(argv);
		free(ms_linePointerCP);
	}
	return (0);
}
