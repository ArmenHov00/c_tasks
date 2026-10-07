#include <stdio.h>
int main()
{

	int a;
	int b;
	int c;
	int num;

	printf("Please enter a positive 3-digit number\n");
	scanf("%d", &num);

	a = num % 10;
	num = num / 10;

	b = num % 10;
	num = num / 10;

	c = num;

	printf("%d\n", a + b + c);

	return 0;
}
