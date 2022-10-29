#include <stdio.h>
#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: number
 * @n2: number
 * @r: buffer store result.
 * @size_r: buffer size:
 * Return: the pointer selected value
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int a = 0, b = 0, i, bg, j, k, c = 0;

    while (*(n1 + a) != '\0')
        a++;
    while (*(n2 + b) != '\0')
        b++;
    if (a >= b)
        bg = a;
    else
        bg = b;
    if (size_r <= bg + 1)
        return (0);
    r[bg + 1] = '\0';
    a--, b--, size_r--;
    j = *(n1 + a) - 48, k = *(n2 + b) - 48;
    while (bg >= 0)
    {
        i = j + k + c;
        if (i >= 10)
            c = i / 10;
        else
            c = 0;
        if (i > 0)
        *(r + bg) = (i % 10) + 48;
        else
            *(r + bg) = '0';
        if (a > 0)
            a--, j = *(n1 + a) - 48;
        else
            j = 0;
        if (b > 0)
            b--, k = *(n2 + b) - 48;
        else
            k = 0;
        bg--, size_r--;
    }
    if (*(r) == '0')
        return (r + 1);
    else
	    return (r);
}
