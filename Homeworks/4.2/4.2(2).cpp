#include <stdio.h>

int main()
{
	int n;
	int mas[100];
	printf("Elements number ");
	scanf_s("%i", &n);

	for (int i = 0;i < n;i++)
	{
		scanf_s("%i", &mas[i]);
	}

	for (int i = 0;i < n;i++)
	{
		printf("%4i  ", mas[i]);
	}
}

