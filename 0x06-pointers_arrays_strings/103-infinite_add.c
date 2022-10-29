#include <stdio.h>
#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: number
 * @n2: number
 * @r: buffer store result.
 * @size_r: buffer size:
 * Return: returns selected value
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int a = 0, b = 0, sum = 0, i, j, k, l;

    while (*(n1 + a) != '\0')
        a++;
    while (*(n2 + b) != '\0')
        b++;
    if (a >= b)
        j = a;
    else
        j = b;
    if (size_r <= j + 1)
        return (0);
    r[j + 1] = '\0';
    a--, b--, size_r--;
    k = *(n1 + a) - 48, l = *(n2 + b) - 48;
    while (j >= 0)
    {
        i = k + l + sum;
        if (i >= 10)
            sum = i / 10;
        else
            sum = 0;
        if (i > 0)
        *(r + j) = (i % 10) + 48;
        else
            *(r + j) = '0';
        if (a > 0)
            a--, k = *(n1 + a) - 48;
        else
            k = 0;
        if (b > 0)
            b--, l = *(n2 + b) - 48;
        else
            l = 0;
        j--, size_r--;
    }
    if (*(r) == '0')
        return (r + 1);
    else
	    return (r);
}
