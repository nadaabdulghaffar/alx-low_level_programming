
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog-function init info of dog
 * @d: pointer to struct
 * @name:dog's name
 * @age:dog's age
 * @owner:dog's owner
 * return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d->name = name;
        d->age =  age;
        d->owner = owner;
    }
}

