#include <stdio.h>

int main()
{
	int mas[100][100];

	int n, m;

	printf("n=");
	scanf_s("%d",&n);

	printf("m=");
	scanf_s("%d", &m);

	for (int j = 0;j < n;j++)
	{
		for (int i = 0;i < m;i++)
		{
			scanf_s("%i", &mas[j][i]);
		}
	}

	for (int j = 0;j < n;j++)
	{
		for (int i = 0;i < m;i++)
		{
			printf("%3i",mas[j][i]);
		}
		printf("\n\n");
	}
	
}