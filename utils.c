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
