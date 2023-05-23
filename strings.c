#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @str: The string whose length is to be printed
 * Return: int
 */

int _strlen(char *str)
{
int len = 0;
if (str == NULL)
{
return (0);
}
if (*str != '\0')
{
len = _strlen(str + 1);
return (len + 1);
}
return (0);
}

/**
 * _strncmp - compares first n characters
 * oftwo strings  and returns 1
 * if the strings can be considered identical,
 * otherwise return 0.
 * @str1: the first string
 * @str2: the second string
 * @n: n
 * Return: 1 if identical, else 0
*/

int _strncmp(char *str1, char *str2, int n)
{
int i;
if (str1 == NULL || str2 == NULL)
{
return (-1);
}
for (i = 0; i < n; i++)
{
if (str1[i] != str2[i])
{
return (0);
}
}
return (1);
}

/**
* _concatpro - function to concatenate 2 strings
* @out: the destination string
* @in: the source string
* Return: void
*/
void _concatpro(char *out, char *in)
{
while (*out != '\0')
{
out++;
}
while (*in != '\0')
{
*out = *in;
out++;
in++;
}
*out = '\0';
}

/**
* _strcopy - function to copy a string
* @src: the source string
* @dest: the copied string
* Return: void
*/
void _strcopy(char *dest, const char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
}

/**
 * _strcmp - compares two strings and returns 1
 * if the strings are identical,
 * otherwise, it returns 0.
 * @str1: the first string
 * @str2: the second string
 * Return: 1 if identical, else 0
*/

int _strcmp(char *str1, char *str2)
{
int n = _strlen(str1);
int i;
if (str1 == NULL || str2 == NULL)
{
return (-1);
}
if (_strlen(str1) != _strlen(str2))
{
return (0);
}
for (i = 0; i < n; i++)
{
if (str1[i] != str2[i])
{
return (0);
}
}
return (1);
}

