#include "shelly.h"
/**
 * main - an attempt to mimic UNIX shell program
 * Return: 0 on success, -1 on error
 */
int main(void)
{
	ssize_t ms_numCharsRead;
	char **argv;
	char *ms_linePointer = NULL, *ms_linePointerCP = NULL, *ms_token = NULL;
	size_t ms_lineSize = 0;
	int argc = 0, i, j;

	while (true)
	{
		prompt();
		ms_numCharsRead = getline(&ms_linePointer, &ms_lineSize, stdin);
		if (ms_numCharsRead == -1)
			handleError("See ya later...\n");
		argc = tokenize(ms_linePointer);
	}
	free(ms_linePointer);
	return (0);
}
