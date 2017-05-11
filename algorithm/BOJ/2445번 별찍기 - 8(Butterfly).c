#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int k = 0;
		for (int j = 0; j < i; j++)
		{
			printf("*");
			k++;
		}
		for (int j = k; j < n; j++)
		{
			printf(" ");
		}
		int m = 0;
		for (int j = k; j < n; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n; i++)
	{
		int t = 0;
		for (int j = i; j < n; j++)
		{
			printf("*");
			t++;
		}
		for (int j = t; j < n; j++)
		{
			printf("  ");
		}
		for (int j = i; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}