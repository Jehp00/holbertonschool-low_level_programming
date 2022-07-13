#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int nul, n, o;
dog_t *d;

if (name == NULL || owner == NULL)
return (NULL);
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
for (nul = 0; name[nul]; nul++)
;
nul++;
d->name = malloc(nul *sizeof(char));
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (o = 0; o < nul; o++)
d->name[o] = name[o];
d->age = age;
for (n = 0; owner[n]; n++)
;
n++;
d->owner = malloc(n *sizeof(char));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (o = 0; o < n; o++)
d->owner[o] = owner[o];
return (d);
}
