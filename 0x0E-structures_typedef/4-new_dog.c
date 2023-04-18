#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new  dog
 *
 * Return: NULL or to the new dog 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int poppy, puppy, i;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (poppy = 0; name[poppy]; poppy++)
		;
	poppy++;
	new_dog->name = malloc(poppy * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < poppy; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	for (puppy = 0; owner[puppy]; puppy++)
		;
	puppy++;
	new_dog->owner = malloc(puppy * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < puppy; i++)
		new_dog->owner[i] = owner[i]
		;
	i++;
	return (new_dog);
}
