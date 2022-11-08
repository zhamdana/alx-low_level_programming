#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: 0, negative or NULL
 */
int **alloc_grid(int width, int height)
{
	int **i, j, k;

	if (width < 1 || height < 1)
		return (NULL);
	i = malloc(height * sizeof(int *));
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		i[j] = malloc(width * sizeof(int));
		if (i[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(i[j]);
			free(i);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
			i[j][k] = 0;
	return (i);
}
