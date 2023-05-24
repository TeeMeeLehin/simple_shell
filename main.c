#include "main.h"

/**
* main - simple shell main function
* @ac: number of passed argumennts
* @argv: the array of passed arguments
* Return: int
*/
int main(int ac, char *argv[])
{
int status;
int loop = 1;

signal(SIGINT, handle_sigint);
signal(SIGQUIT, handle_sigquit);

while (loop)
{
char *inputs[6];
char *input;
int is_interactive = isatty(STDIN_FILENO);
if (is_interactive)
{
_putstr("#shell$ ");
fflush(stdout);
}
input = _getline();
tokenizer(input, inputs);

check_exits(inputs, loop, input, status);
print_env(inputs);

status = execute_cmd(inputs, argv);

if (input)
{
free(input);
}
loop++;
}
(void)ac;
return (EXIT_SUCCESS);
}
