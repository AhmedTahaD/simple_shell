#include "my_pretty_shell.h"
/**
 * main - shell function that execute my shell
 *
 * Return: return 0 if success
 */
int main(void)
{
	while (1)
	{
		char command[MAX_COMMAND_SIZE];

		printf("TahaShell $");
		read_command(command);
	}
	return (0);
}
