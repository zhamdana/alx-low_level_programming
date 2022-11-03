#include "main.h"
/**
  * _strlen_recursion - returns length of a string
  * @s: string
  * Return: retruns lenght of a string or 0
  */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * check_p - finds if string is palindrome
 * @a: string
 * @b: string length
 * Return: 0, 1, or string and length
 */
int check_p(char *a, int b)
{
	if (b < 1)
		return (1);
	if (*(a + b) == *a)
		return (check_p(a + 1, b - 2));
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to string
 * Return: returns a value
 */

int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (check_p(s, i - 1));
}
