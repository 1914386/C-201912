#include <stdio.h>

//팩토리얼 함수
int factorial(int n)
{
	if (n <= 1) 
		return 1;
	else
		return n * factorial(n - 1);
}

//피보나치 함수
int fib(int n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return (fib(n - 1) + fib(n - 2));
}

int main()
{
	printf("factorial(5) = %d", factorial(5));
	printf("\n");
	int i;
	for (i = 1; i < 11; i++)
		printf("%d ", fib(i));

	return 0;
}

