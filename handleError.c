#include "shelly.h"

/**
 * handleError - prints errors
 * @msg: message to be printed
 */

void handleError(char *msg)
{
	printString(msg);
	exit(2);
}
