#include "main.h"

/**
* _getline - function to read input from stdin
* Return: the input string
*/
char *_getline()
{
char *input = NULL;
size_t len = 0;

if (getline(&input, &len, stdin) == -1)
{
free(input);
exit(0);
}
return (input);
}

/**
* tokenizer - function to tokenize inputs
* @input: input string
* @inputs: output array of tokens
* Return: void
*/
void tokenizer(char *input, char *inputs[])
{
int i = 0;
input = strtok(input, " \n");
while (input)
{
inputs[i] = input;
input = strtok(NULL, " \n");
i++;
}
inputs[i] = NULL;
}

/**
* check_exits - function to implement exit
* @inputs: input array
* @loop: main loop counter
* @input: input string
* @status: exit status
* Return: void
*/
void check_exits(char *inputs[], int loop, char *input, int status)
{
if (_strcmp(inputs[0], "exit") == 1 && !(inputs[1]))
{
free(input);
if (loop > 1)
{
exit(status);
}
else
{
exit(EXIT_SUCCESS);
}
}
}

/**
* print_env - function to print environment variables
* @inputs: input array
* Return: void
*/
void print_env(char **inputs)
{
char **lines;
if (_strcmp(inputs[0], "env") == 1 && !(inputs[1]))
{
for (lines = environ; *lines != NULL; lines++)
{
_putstr(*lines);
_putstr("\n");
}
}
}
