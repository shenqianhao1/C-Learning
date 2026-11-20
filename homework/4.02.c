 #include<stdio.h>

int main()
{
	int a[10];
	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &a[i]);
	}
	int n;
	for (int j = 0;j <= 4;j++)
	{
		n = a[j];
		a[j] = a[9 - j];
		a[ 9 - j] = n;
	}
	for (int m = 0;m < 10;m++)
	{
		printf("%d ", a[m]);
	}
	return 0;
}