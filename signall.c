#include "main.h"

/**
* handle_sigint - function to handle Ctrl C
* @sig: signal
* Return: void
*/
void handle_sigint(int sig)
{
(void)sig;
_putstr("\n");
_putstr("$ ");
fflush(stdout);
}

/**
* handle_sigquit - function to handle Ctrl D
* @sig: signal
* Return: void
*/
void handle_sigquit(int sig)
{
(void)sig;
exit(EXIT_SUCCESS);
}
