#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = strlen(name);
	int j = strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * i);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * j);

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
