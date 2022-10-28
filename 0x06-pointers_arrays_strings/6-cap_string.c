#include "main.h"
/**
  * *cap_string - capitalizes all words of a string
  * @i: input string
  * Return: return i
  **/
char *cap_string(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[0] >= 97 && i[0] <= 122)
		{
			i[0] = i[0] - 32;
			if (i[j] == 32 || i[j] == 9 ||
			   i[j] == 10 || i[j] == 44 ||
		    	   i[j] == 59 || i[j] == 46 ||
			   i[j] == 33 || i[j] == 63 ||
			   i[j] == 34 || i[j] == 40 ||
			   i[j] == 41 || i[j] == 123 ||
			   i[j] == 125)
			   i[j] -= 32;
				if (i[j + 1] >= 97 && i[j + 1] <= 122)
					i[j + 1] = i[j + 1] - 32;
		}
	}
	return (i);
}
