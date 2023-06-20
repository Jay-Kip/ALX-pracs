#include <stdio.h>
#include <string.h>

struct students
{
	char name[20];
	int age;
	char city[20];


};

int main()
{
	struct students student1;
	struct students student2;
	struct students student3;

	strcpy(student1.name, "Jay");
	student1.age = 20;
	strcpy(student1.city, "London");

	strcpy(student2.name, "Mael");
	student2.age = 22;
	strcpy(student2.city, "paris");

	strcpy(student3.name, "Dan");
	student3.age = 22;
	strcpy(student3.city, "Nairobi");


	printf("%s\n%d\n%s\n", student1.name, student1.age, student1.city);

	printf("\n===========================\n\n");

	printf("%s\n%d\n%s\n", student2.name, student2.age, student2.city);

	printf("\n============================\n\n");
	printf("%s\n%d\n%s\n", student3.name, student3.age, student3.city);
	printf("\n============================\n\n");



	return (0);
}
