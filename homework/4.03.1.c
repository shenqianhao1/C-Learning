#include<stdio.h>

int main()
{
	int a[9];
	int m[3][3];
	int c = 0;
	for (int i = 0;i < 3;i++)
	{
		int j;
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &m[i][j]);
			a[c] = m[i][j];
			c++;
		}
	}

	
		for (int m = 0;m < 9;m++)
		{
			int k;
			int n;
			n = m + 1;
			for (;n < 9;n++)
				if (a[n] < a[m])
				{
					k = a[m];
					a[m] = a[n];
					a[n] = k;
				}
		}
		for (int b = 0;b < 9;b++)
		{
			printf("%d ", a[b]);
			if ((b + 1) % 3 == 0)
				printf("\n");
		}