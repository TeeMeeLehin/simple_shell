#include "main.h"

/**
* _putchar - function to write a character to terminal
* @c: the character
* Return: zero
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _putint - function to write an integer to terminal
* @n: the integer
* Return: zero
*/
int _putint(int n)
{
int len = 0;
if (n / 10 != 0)
{
len += _putint(n / 10);
}
len += 1;
write(1, &"0123456789"[n % 10], 1);
return (len);
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


