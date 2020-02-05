#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - function to sorted selection
 * @array: pointer of int
 * @size: size of array
 * Return: void
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
if (x != i)
{
tmp = array[i];
array[i] = array[x];
array[x] = tmp;
print_array(array, size);
}
}
}
