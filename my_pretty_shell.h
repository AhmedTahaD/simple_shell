#ifndef MY_PRETTY_SHELL_H
#define MY_PRETTY_SHELL_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
/*
 * macros
 */
#define MAX_COMMAND_SIZE 1024
/*
 * functions prototypes
 */
void read_command(char *command);

#endif
