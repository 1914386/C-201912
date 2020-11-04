#include <stdio.h>

/*main 함수*/

int main(void)
{
	int a = 20, b = 10;
	int sum, product, quotient;
	sum = a + b;
	product = a * b;
	quotient = a / b;

	printf("두 수의 합: %d\n", sum);
	printf("두 수의 곱: %d\n", product);
	printf("두 수를 나눈 값: %d", quotient);


	return 0;
}