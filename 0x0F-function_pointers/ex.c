#include <stdio.h>

float sum(float num1, float num2)
{
	return (num1 + num2);
}
float sub(float num1, float num2)
{
	return (num1 - num2);
}
float mul(float num1, float num2)
{
	return (num1 * num2);
}
float div(float num1, float num2)
{
	return (num1 / num2);
}

int main()
{
	float (*ptr[4]) (float, float) = {sum, sub, mul, div};
	int option;
	float num1;
	float num2;

	printf("Enter option: \n");
	scanf("%d", &option);

	printf("Enter the numbers\n");
	scanf("%f\n %f", &num1, &num2);

	printf("%f\n", ptr[option] (num1, num2));

	return (0);
}
