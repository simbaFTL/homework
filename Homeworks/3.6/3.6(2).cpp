#include <stdio.h>

int main()
{
	int a=8;
	while (a!=7)
	{
		scanf_s("%i", &a);
		if (a > 7)
		{
			printf("Hidden number is less\n");
		}
		else
		{
			if(a<7)
			printf("Hidden number is greater\n");
		}
		if (a > 10)
		{
			printf("Your number is greater than 10\n");
		}
		else
		{
			if (a < 10)
			{
				printf("Your number is less than 10\n");
			}
		}
		if (a % 2 == 0)
		{
			printf("Your number is divisible by 2\n");
		}
		else
		{
				printf("Your number is not divisible by 2\n");
		}
		if (a % 3 == 0)
		{
			printf("Your number is divisible by 3\n");
		}
		else
		{
			printf("Your number is not divisible by 3\n");
		}
	
	}
	printf("Nice!\n");
}