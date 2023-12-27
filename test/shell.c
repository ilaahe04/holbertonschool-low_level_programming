#include "main.h"
/**
 * main - main func
 *
 * Return: int
 */
int main(void)
{
	char *buff, **arr;
	int status, i;
	pid_t pid;
	
	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");
		buff = _getline();
		if (buff == NULL)
			break;
		arr = line_div(buff);
		free(buff);
		if (!*arr)
		{
			free(arr);
			continue;
		}
		pid = fork();
		if (pid == 0)
		{
			if (execve(arr[0], arr, NULL) == -1)
			{
				perror("ERROR");
				exit(1);
			}
		}
		else if (pid > 0)
		{
			if (wait(&status) == -1)
			{
				perror("ERROR");
			}
		}
		else
			perror("ERROR");
		if (pid == -1)
			perror("ERROR");
		for (i = 0; *(arr + +i); i++)
			free(*(arr + i));
		free(arr);
	}
	free(buff);
	return (0);
}
