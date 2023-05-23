#include "main.h"

/**
* _getenv - function to get the
* value of  a given environment variable
* @str: the env variable
* Return: the value string
*/
char *_getenv(char *str)
{
int n, i;
if (!str)
{
return (NULL);
}
n = _strlen(str);
for (i = 0; environ[i] != NULL; i++)
{
if (_strncmp(environ[i], str, n) == 1)
{
return (environ[i] + n + 1);
}
}
return (NULL);
}

/**
* check_command -function to get the full path
* of a command
* @cmd: input command
* Return: the full path of the command
*/
char *check_command(char *cmd)
{
char *path_cmd;
char *path;
char *sl = "/";
char *token;
char *path_copy;
if (cmd == NULL)
{
return (NULL);
}
if (access(cmd, X_OK) == 0)
{
path_cmd = malloc(_strlen(cmd) + 1);
_strcopy(path_cmd, cmd);
return (path_cmd);
}
path = _getenv("PATH");
path_copy = malloc(_strlen(path) + 1);
_strcopy(path_copy, path);
token = strtok(path_copy, ":");
while (token != NULL)
{
path_cmd = malloc(_strlen(token) + _strlen(cmd) + 2);
_strcopy(path_cmd, token);
_concatpro(path_cmd, sl);
_concatpro(path_cmd, cmd);
if (access(path_cmd, X_OK) == 0)
{
free(path_copy);
return (path_cmd);
}
free(path_cmd);
token = strtok(NULL, ":");
}
free(path_copy);
return (NULL);
}

