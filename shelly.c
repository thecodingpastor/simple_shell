#include "shelly.h"
/**
 * main - mimics simple shell
 * @argc: arg count
 * @argv: arg vector
 * @envp: envp
 * Return: 0 or -1
 */
int global_argc;
char **global_argv;

int main(int argc, char *argv[], char *envp[])
{
	ssize_t read;
	size_t ms_lineSize = 0;
	size_t input_argc = 0;
	char *ms_linePointer;
	char *input_argv[100];
	int count = 0;

	global_argc = argc;
	global_argv = argv;

	while (true)
	{
		count++;
		prompt();
		read = _getline(&ms_linePointer, &ms_lineSize, stdin);

		if (read == -1)
			free(ms_linePointer), printString("\n"), exit(2);
		ms_linePointer[read - 1] = '\0';

		if (_strlen(ms_linePointer) == 0)
			continue;
		input_argc = splitToTokens(ms_linePointer, input_argv, " ");

		execCommand(input_argc, input_argv, envp, count);
	}
	free(ms_linePointer);
	return (0);
}
