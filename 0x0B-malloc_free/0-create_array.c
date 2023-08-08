#include "main.h"
/**
 * *create_array-creats an array of chars and initializes it with a char c
 * @size:size of array
 * @c:char to initalize with
 * Return:pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	if (array == 0 || size == 0)
		return (NULL);
	for (int i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
