#include<stdio.h>

int main()
{
	int a[8];
	int max = 0;
	int min = 0;
	for (int i = 0;i < 8;i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int j=1;j < 8;j++)
	{
		if (a[j] < a[min])
			min = j;
		if (a[j] > a[max])
			max = j;
	}
	int b;
	b = a[min];
	a[min] = a[max];
	a[max] = b;
	for (int k = 0;k < 8;k++)
	{
		printf("%d ", a[k]);
	}
	return 0;
		
}