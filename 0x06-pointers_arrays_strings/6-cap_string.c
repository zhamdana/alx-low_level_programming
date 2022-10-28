#include "holberton.h"
/**
 **cap_string - do something
 *@s: do somerhing
 *Return: something
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] > 96 && s[0] < 123)
s[0] = s[0] - 32;
if (s[i] == '.' || s[i] == 9 || s[i] == '\n' || s[i] == ',' || s[i] == ';' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
s[i] == '{' || s[i] == '}' || s[i] == ' ')
{
if (s[i + 1] > 96 && s[i + 1] < 123)
s[i + 1] = s[i + 1] - 32;
}
}
return (s);
}
