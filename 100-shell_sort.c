#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * shell_sort - Shell Sort
 * @array: array to sort
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	long int jmp = 1, i, j, tmp;

	while (jmp < ((int)(size)))
		jmp = (3 * jmp) + 1;
	for (jmp = (jmp - 1) / 3; jmp > 0; jmp = (jmp - 1) / 3)
	{
	for (i = jmp; i < (int)size; i += 1)
		{
		tmp = array[i];

	for (j = i; j >= jmp &&
	array[j - jmp] > tmp; j -= jmp)
	array[j] = array[j - jmp];
	array[j] = tmp;
		}
	print_array(array, size);
	}
}
