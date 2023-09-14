#include "shelly.h"
/**
 * tokenize - splits arguments into tokens
 * @ms_linePointer: pointer to the args passed
 * Return: number of tokens
*/
size_t tokenize(char *ms_linePointer)
{
	size_t ms_numTokens = 0;
	char *ms_token = NULL;

	ms_token = strtok(ms_linePointer, " \n");

	while (ms_token)
	{
		ms_numTokens++;
		printString(ms_token), printString("\n");
		ms_token = strtok(NULL, " \n");
	}
	return (ms_numTokens);
}
