#include<stdio.h>
#include<string.h>

int main(void)
{
	int i = 14;
	int* pi = &i;

	printf("i=%d pi=%p\n", i, pi);
	(*pi)++;
	printf("i=%d pi=%p\n", i, pi);
	printf("i=%d pi=%p\n", i, pi);
	*pi++;
	printf("i=%d pi=%p\n", i, pi);
	return 0;
}