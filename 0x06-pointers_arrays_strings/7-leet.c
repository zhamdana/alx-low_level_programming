#include "main.h"
/**
  * *leet - encode a string into 1337
  * @i: input string
  * Return: return i
  **/
char *leet(char *i)
{
	int j, k = 0;
	char a1[] = "43071";
	char a2[] = "aeotl";
	char a3[] = "AEOTL";

	for (j = 0; i[j] != '\0'; j++)
	{
		k = 0;
		while (!(a2[k] == i[j] || a3[k] == i[j]) && k <= 5)
			k++;
		if (a2[k] == i[j] || a3[k] == i[j])
			i[j] = a1[k];
	}
	return (i);
}
