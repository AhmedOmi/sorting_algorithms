#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - function to quick sort
 * @array: pointer of table
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
int i = 0, j = 0, p = 0, tmp = 0;
if (array == NULL)
return;
if (array[0] < array[size])
{
p = array[0];
i = array[0];
j = array[size];
}
while (array[i] <= array[p] && i < array[size])
i++;
while (array[j] > array[p])
j--;
if (i < j)
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
}
tmp = array[p];
array[p] = array[j];
array[j] = tmp;
quick_sort(array, j - 1);
}
