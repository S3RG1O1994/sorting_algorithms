#include "sort.h"
/**
 * selection_sort - sort an array of integer using selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t cnt, cnt2, min;
	int tmp;

	for (cnt = 0; cnt < size; cnt++)
	{
		min = cnt;
		for (cnt2 = cnt + 1; cnt2 < size; cnt2++)
		{
			if (array[cnt2] < array[min])
				min = cnt2;
		}
		if (min != cnt)
		{
			tmp = array[cnt];
			array[cnt] = array[min];
			array[min] = tmp;
			for (cnt2 = 0; cnt2 < size; cnt2++)
			{
				if (cnt2 != size - 1)
					printf("%i, ", array[cnt2]);
				else
					printf("%i\n", array[cnt2]);
			}
		}
	}
}
