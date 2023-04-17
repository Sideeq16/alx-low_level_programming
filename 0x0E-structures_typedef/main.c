#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog mydog;

	mydog.name = "Poppy";
	mydog.age = 3.5;
	mydog.owner = "Bob";
	print_dog(&mydog);
	return(0);
}
