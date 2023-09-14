#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

void handleError(char *msg);
int printString(const char *str);
void prompt(void);
size_t tokenize(char *ms_linePointer);

#endif
