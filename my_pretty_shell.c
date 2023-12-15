#include "my_pretty_shell.h"
/*
 * main main shell function
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
