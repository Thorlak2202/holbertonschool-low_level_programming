#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - concatenates two strings.
*
* @width: controls width of the array.
* @height: controls height of the array.
*
* Return: return NULL when function fails.
*/
int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **grid;

if ((width <= 0) || (height <= 0))
{
	return (NULL);
}
while (i < height)
{
	i++;
}
while (j < width)
{
	j++;
}
grid = malloc(j * (sizeof(int) * i));
if (grid == NULL)
{
	return (NULL);
}
grid[i][j] = '0';
return (grid);
}
