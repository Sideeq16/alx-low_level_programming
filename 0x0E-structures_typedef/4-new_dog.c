#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
	{
		return (NULL);
	}

	ptr_dog->name = name ? name : "(nil)";
	ptr_dog->age = age;
	ptr_dog->owner = owner ? owner : "(nil)";

	return (ptr_dog);
}
