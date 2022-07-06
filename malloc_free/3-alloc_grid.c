#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
int **g;
int a, b;

if (width <= 0 || height <= 0)
{
return (NULL);
}
g = (int **) malloc(sizeof(int *) * height);
if (g == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
g[a] = malloc(sizeof(int) * width);
if (g[a] == NULL)
{
for (a = a - 1; a >= 0; a--)
{
free(g[a]);
}
free(g);
return (NULL);
}
}
for (a = 0; b < width; b++)
{
g[a][b] = 0;
}
return (g);
}
