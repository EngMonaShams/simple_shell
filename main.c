#include "shell.h"


/**
 * main - program entry point
 *
 * @ac: number of args
 * @args:pointer to array of args
 * @env: enviroment
 *
 * Return: always 0
 */

int main(int ac, char **args, char **env)
{
	char *input = NULL;

	(void)ac, (void)args, (void)env;

	while (1)
	{
		if (isatty(fileno(stdin)))
		{
			write(STDOUT_FILENO, ">>", _strlen(">>"));
			fflush(stdout);
		}
		gcmnd(&input);

		free(input);
		input = NULL;
	}

	return (0);
}
