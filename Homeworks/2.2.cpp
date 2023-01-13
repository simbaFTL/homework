#include <stdio.h>

int main()
{
	int a,b;
	printf("a=");
	scanf_s("%i", &a);
	printf("b=");
	scanf_s("%i", &b);
	if (a > b)
	{
		printf("A is more");
	}
	else
	{
		if (a == b)
		{
			printf("A=B");
		}
		else
		{
			printf("B is more");
		}
	}
}