#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, x, tmp;
if (array == NULL)
return;
for (i = 0; i < size - 1; i++)
{
x = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[x])
x = j;
}
tmp = array[i];
array[i] = array[x];
array[x] = tmp;
print_array(array,size);
}
}
