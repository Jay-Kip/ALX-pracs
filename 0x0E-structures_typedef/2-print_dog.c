#include <stdio.h>
#include "dog.h"
#include <string.h>


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nill)";

	printf("Namem: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
