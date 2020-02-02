#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function to sorting array wth bubble function
 * @array: array of integer
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
size_t temp;
for (j = 0; j < size; j++)
{
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
}
}
}
