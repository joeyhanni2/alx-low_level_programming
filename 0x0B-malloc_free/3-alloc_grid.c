#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2 dim array
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2-D integer grid
 */
int **alloc_grid(int width, int height)
{
int i, h;
int **n
i = h = 0;
if (height < 1)
return (NULL);
n = (int **)malloc(height * sizeof(n));
if (n == NULL)
{
free(n);
return (NULL);
}
for (i = 0; i < height; i++)
{
n[i] = malloc(width * sizeof(int));
if (n[i] == NULL)
{
for (h = 0; h < i; h++)
free(n[h]);
free(n);
return (NULL);
}
for (h = 0; h < width; h++)
n[i][h] = 0;
}
return (n);
}
