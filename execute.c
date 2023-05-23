#include "main.h"


/**
* execute_cmd - function to execute command
* @inputs: array of tokenized inputs
* @argv: array of arguments to program
* Return: int
*/
int execute_cmd(char *inputs[], char *argv[])
{
int status;
pid_t pid;
char *command = check_command(inputs[0]);

if (command)
{
pid = fork();
if (pid == -1)
{
perror("Fork Error!");
exit(EXIT_FAILURE);
}
if (pid == 0)
{
execve(command, inputs, NULL);
perror(inputs[0]);
free(command);
exit(EXIT_FAILURE);
}
else
{
wait(&status);
free(command);
}
}
else
{
if (inputs[0])
{
_putstr(argv[0]);
_putstr(": 1: ");
_putstr(inputs[0]);
_putstr(": not found\n");
return (EXIT_FAILURE);
}
}
return (EXIT_SUCCESS);
}
