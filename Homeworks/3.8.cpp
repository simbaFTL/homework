#include <stdio.h>

int main()
{
	int n,a;
	int minn = 100000000;
	int maxx = -100000000;
	float summ = 0;
	float average;
	scanf_s ("%i", &n);
	
	for (int i = 0;i < n;i++)
	{
		scanf_s ("%i", &a);
		summ = summ + a;
		if (a < minn)
		{
			minn = a;
		}
		if (a > maxx)
		{
			maxx = a;
		}

	}
	average = summ/n;
	printf("Min: %i\n", minn);
	printf("Max: %i\n", maxx);
	printf("Sum: %f\n", summ);
	printf("Average: %f\n", average);
}