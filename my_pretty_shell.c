#include "my_pretty_shell.h"
/**
 * main - shell function that execute my shell
 *
 * Return: return 0 if success
 */
int main(void)
{
	char *delim;
	char *args[MAX_COMMAND_SIZE];
	int count;
	char **environ;

	while (1)
	{
		char command[MAX_COMMAND_SIZE];
		pid_t shell_pid = fork();

		printf("TahaShell $");
		read_command(command);
		if (shell_pid == 0)
		{
			delim = strtok(command, " ");
			while (delim != NULL)
			{
				args[count] = delim;
				count++;
				delim = strtok(command, " ");
			}
			args[count] = NULL;
			execve(args[0], args, environ);
		}
	}
	return (0);
}
