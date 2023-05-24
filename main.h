#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

extern char **environ;

int _putchar(char c);
int _putstr(char *str);
int _strlen(char *str);
char *_getenv(char *str);
int _strncmp(char *str1, char *str2, int n);
void _concatpro(char *out, char *in);
void _strcopy(char *dest, const char *src);
char *check_command(char *cmd);
char *_getline(int status);
void tokenizer(char *input, char *inputs[]);
int execute_cmd(char *inputs[], char *argv[]);
void handle_sigint(int sig);
int _strcmp(char *str1, char *str2);
void check_exits(char *inputs[], int loop, char *input, int status);
void print_env(char **inputs);

#endif

