#include "sort.h"

/**
 * bubble_sort - sorted an array
 * @array: array unsorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t cnt = 0, cnt2 = 0;
	int tmp;
	bool swapped = false;

	if (!array || !size)
		return;

	for (cnt = 0; cnt < size - 1; cnt++)
	{
		swapped = false;
		for (cnt2 = 0; cnt2 < size - 1 - cnt; cnt2++)
		{
			if (array[cnt2] > array[cnt2 + 1])
			{
				tmp = array[cnt2];
				array[cnt2] = array[cnt2 + 1];
				array[cnt2 + 1] = tmp;
				swapped = true;
				print_array((const int *) array, size);
			}
		}
		if (!swapped)
			break;
	}
}
