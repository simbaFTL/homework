#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int mas[100][100];
	int n, m;

	printf("n=");
	scanf_s("%d", &n);

	printf("m=");
	scanf_s("%d", &m);

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			scanf_s("%i",&mas[i][j]);
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			printf("%3d", mas[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n\n");
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < m;j++)
		{
			int q = mas[i][j];
			mas[i][j] = mas[j][i];
			mas[j][i] = q;	
		}

	}
	
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			printf("%3d", mas[i][j]);
		}
		printf("\n\n");
	}
}