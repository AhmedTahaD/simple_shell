#include "my_pretty_shell.h"
/**
 * main - shell function that execute my shell
 *
 * Return: return 0 if success
 */
int main()
{
	while (1)
	{
		char command[MAX_COMMAND_SIZE];
		pid_t shell_pid = fork();

		printf("TahaShell $");
		read_command(command);
		fflush(stdout);
	}
	return (0);
}
