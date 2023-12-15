#include "my_pretty_shell.h"
/*
 * _read_command function to read the input from user
 * @command : command to read
 */

void _read_command(char *command)
{
	size_t length = strlen(command);

	fgets(command, MAX_INPUT_SIZE, stdin);
	if (fgets(input, MAX_INPUT_SIZE, stdin) == NULL)
	{
		printf("\n");
		break;
	}
	if (length > 0 && command[length - 1] == '\n')
	{
		command[length - 1] = '\0';
	}
}
