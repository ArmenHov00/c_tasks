#include <stdio.h>

int main()
{
	int a = 0; 

	printf("Pleae enter a number\n");
	scanf("%d", &a);

	if (a == 0) 
	{
		printf("Null\n");
	}
	else if (a % 2 == 0)
	{
		printf("Even\n");
	}
	else 
	{
		printf("Odd\n");
	}
	
	return 0;

}
