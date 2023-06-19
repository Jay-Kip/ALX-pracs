#include <stdio.h>

int main()
{
	printf("Date is %s\n", __DATE__);
	printf("Time is %s\n", __TIME__);
	printf("File is %s\n", __FILE__);
	printf("Line is %d\n", __LINE__);
	printf("STDC / ANSI : %d\n", __STDC__);

	return (0);
}
