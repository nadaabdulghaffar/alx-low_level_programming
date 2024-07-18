#include "search_algos.h"
/**
 * linear_search()-searches for a value in an array using Linear search
 * @array: is a pointer to the first element of the array to search in
 * @size:is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located ,
 * If value is not present in array or if array is NULL,return -1
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (size_t index = 0; index < size; index++)
	{
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
