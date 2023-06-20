#include <stdio.h>

#include <string.h>

typedef struct
{
	char *name;
	int age;
	char *state;
}students;

int main()
{
	students student1 = {"Alice", 20, "Ghana"};
	students student2 = {"John", 30, "Somalia"};
	students student3 = {"Kim", 25, "Korea"};

	printf("%s\n%d\n%s\n", student1.name, student1.age, student1.state);

	printf("\n===================================\n");

	printf("%s\n%d\n%s\n", student2.name, student2.age, student2.state);

	printf("\n===================================\n");

	printf("%s\n%d\n%s\n", student3.name, student3.age, student3.state);

	printf("\n===================================\n");



	return (0);
}
