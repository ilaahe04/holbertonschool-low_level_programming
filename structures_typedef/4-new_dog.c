#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stdio.h>
/**
  * new_dog- check the code.
  * @name: name of dog in struct
  * @age: age of dog in struct
  * @owner: name of owner of dog in struct
  * Return: Always 0.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_l, owner_l, i;
	dog_t *new_dog1;

	new_dog1 = malloc(sizeof(dog_t));
	if (new_dog1 == NULL)
		return (NULL);

	name_l = strlen(name);
	owner_l = strlen(owner);

	new_dog1->name = malloc(name_l + 1);
	if (new_dog1->name == NULL)
	{
		free(new_dog1->name);
		free(new_dog1);
		return (NULL);
	}
	for (i = 0; i < name_l; i++)
		new_dog1->name[i] = name[i];
	new_dog1->name[i] = '\0';

	new_dog1->age = age;

	new_dog1->owner = malloc(owner_l + 1);
	if (new_dog1->owner == NULL)
	{
		free(new_dog1->owner);
		free(new_dog1->name);
		free(new_dog1);
		return (NULL);
	}
	for (i = 0; i < owner_l; i++)
		new_dog1->owner[i] = owner[i];
	new_dog1->owner[i] = '\0';

	return (new_dog1);
}
