#include <stdio.h>

int main()
{
	int a = 0;

	printf("Please enter a number\n");
	scanf("%d", &a);

	if (a % 3 == 0 && a % 5 == 0) 
	{
		printf("Yes\n");
	}
	else
	{
		printf("Nope, sorry :p\n");
	}

	return 0;
}
