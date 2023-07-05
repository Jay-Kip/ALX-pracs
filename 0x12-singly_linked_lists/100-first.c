#include <stdio.h>
#include <stdlib.h>

void before(void) __attribute__ ((constructor));
void kk() __attribute ((constructor));

void before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
void kk()
{
	printf("Morio wa nzenza\n");
}
