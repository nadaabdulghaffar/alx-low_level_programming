#include "main.h"
#include <stdlib.h>

/**
 *  * *malloc_checked(unsigned int b)-function that allocates memory
 *   * @b: number of bytes
 *    * Return:a pointer to the allocated memory
 *    **/
void *malloc_checked(unsigned int b)
{
		void *ptr = malloc(b);

			if (ptr == 0)
				exit(98);
				return (ptr);
}
