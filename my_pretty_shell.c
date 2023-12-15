#include "my_pretty_shell.h"
/**
 * main - shell function that execute my shell
 *
 */
void main(void)
{
	while (1)
	{
		char command[MAX_COMMAND_SIZE];

		printf("TahaShell $");
		read_command(command);
	}
}
