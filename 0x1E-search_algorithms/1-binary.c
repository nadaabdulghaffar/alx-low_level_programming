#include "search_algos.h"
/**
 * Display - print the elements of array
 * @array: is a pointer to the first element of
 * @size: is the number of elements in array
 */
void Display(int *array, size_t size)
{
	size_t i;
    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

/**
 * binary_search_recursive - helper function to perform binary search recursively
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the subarray to search
 * @right: ending index of the subarray to search
 * @value: value to search for
 *
 * Return: the index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (left > right)
        return (-1);

    mid = left + (right - left) / 2;
    Display(&array[left], right - left + 1);

    if (array[mid] == value)
        return (mid);

    if (array[mid] < value)
        return binary_search_recursive(array, mid + 1, right, value);
    else
        return binary_search_recursive(array, left, mid - 1, value);
}

/**
 * binary_search - searches for a value in a sorted array using Binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return binary_search_recursive(array, 0, size - 1, value);
}
