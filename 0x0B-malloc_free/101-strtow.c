#include "main.h"
#include <stdlib.h>
/**
 * find_index - find index marking
 * @s: string to search
 * Return: return integer
 */
int find_index(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) != ' ' && *(s + i))
	{
		i++, j++;
	}
	return (j);
}
/**
 * word_count - count numbers in string
 * @s: string
 * Return: return integer
 */
int word_count(char *s)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; *(s + i); i++)
		k++;
	for (i = 0; i < k; i++)
	{
		if (*(s + i) != ' ')
		{
			j++, i += find_index(s + i);
		}
	}
	return (j);
}
/**
 * strtow - split a string into words
 * @str: string
 * Return: return string
 */
char **strtow(char *str)
{
	int i = 0, wds, ws, ltts, ls;
	char **s;

	if (str[0] == '\0' || str == NULL)
		return (NULL);
	wds = word_count(str);
	if (wds == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (wds + 1));
	if (s == NULL)
		return (NULL);
	for (ws = 0; ws < wds; ws++)
	{
		while (str[i] == ' ')
			i++;
		ltts = find_index(str + i);
		s[ws] = malloc(sizeof(char) * (ltts + 1));
		if (s[ws] == NULL)
		{
			for (; ws >= 0; ws--)
				free(s[ws]);
			free(s);
			return (NULL);
		}
		for (ls = 0; ls < ltts; ls++)
			s[ws][ls] = str[i++];
		s[ws][ls] = '\0';
	}
	s[ws] = NULL;
	return (s);
}
