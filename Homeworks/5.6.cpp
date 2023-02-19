#include <stdio.h>

int main()
{
	int mas[100][100];
	int n, m;

	printf("n= ");
	scanf_s("%i", &n);

	printf("m= ");
	scanf_s("%i", &m);

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			scanf_s("%i", &mas[i][j]);
		}	
	}

	bool fl = true;

	while (fl)
	{
		fl = false;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m-1;j++)
			{
				if (mas[i][j] > mas[i][j+1])
				{
					int z = mas[i][j];
					mas[i][j] = mas[i][j+1];
					mas[i][j+1] = z;
					fl = true;
				}
			}
			
		}
	}
	for (int j = 0;j < n;j++)
	{
		for (int i = 0;i < m;i++)
		{
			printf("%3i", mas[j][i]);
		}
		printf("\n\n");
	}
	for (int i = 0; i < n; i++) 
	{
		int z = mas[i][0];
		mas[i][0] = mas[i][m - 1];
		mas[i][m - 1] = z;
	}
		printf("\n\n");

	for (int j = 0;j < n;j++)
	{
		for (int i = 0;i < m;i++)
		{
			printf("%3i", mas[j][i]);
		}
		printf("\n\n");
	}
}

