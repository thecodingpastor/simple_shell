#include "shelly.h"
/**
 * prompt - displays the shelly prompter
 */
void prompt(void)
{
	printString("shelly_$ ");
}

/**
 * printString - prints string
 * @str: string to be printed
 * Return: number of strings printed
 */
int printString(char *str)
{
	return (write(STDOUT_FILENO, str, _strlen(str)));
}

/**
 * handleError - prints errors
 * @msg: message to be printed
 * @exitApp: 1 or 0 to indicate exit after error
 */
void handleError(char *msg, bool exitApp)
{
	printString(msg);
	if (exitApp)
		exit(2);
}
