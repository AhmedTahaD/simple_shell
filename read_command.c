#include "my_pretty_shell.h"
#include <string.h>
/**
 * read_command - function to read the input from user
 * @command : command to read
 */

void read_command(char *command)
{
	size_t length = strlen(command);

	fgets(command, MAX_COMMAND_SIZE, stdin);
	if (fgets(command, MAX_COMMAND_SIZE, stdin) == NULL)
	{
		printf("\n");
		exit(22);
	}
	if (length > 0 && command[length - 1] == '\n')
	{
		command[length - 1] = '\0';
	}
}
