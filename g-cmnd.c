#include "shell.h"

/**
 * gcmnd - a function that get the command
 * @input: pointer to string
 *
 */
void gcmnd(char **input)
{
	size_t n = 0;
	int n_input = 0;

	n_input = getline(input, &n, stdin);
	n = _strlen(*input);
	if (n_input == -1)
	{
		free(input);
		exit(0);
	}


	if (n > 0 && (*input)[n - 1] == '\n')
		(*input)[n - 1] = '\0';
}
