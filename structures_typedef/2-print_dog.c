#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * init_dog - initialize struct dog.
  * @d: name of struct
  * @name: name of dog in struct
  * @age: age of dog in struct
  * @owner: name of owner of dog in struct
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
