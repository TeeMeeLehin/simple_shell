#include "main.h"

/**
* _putchar - function to write a character to terminal
* @c: the character
* Return: zero
*/
int _putchar(char c)
{
return (write(STDOUT_FILENO, &c, 1));
}

/**
* _putstr - function to write a string to terminal
* @str: the string
* Return: 0
*/
int _putstr(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
return (0);
}


