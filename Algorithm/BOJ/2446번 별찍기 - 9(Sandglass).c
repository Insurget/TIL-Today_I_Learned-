#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		int t = 0;
		for (int j = 1; j < i; j++)
		{
			printf(" ");
			t++;
		}
		for (int j=t; j < n; j++)
		{
			printf("*");
		}
		printf("*");
		t = 0;
		for (int j = i+1; j < n; j++)
		{
			printf("*");
			t++;
		}
		printf("\n");
	}

	for (int i = 0; i < n - 1; i++)
	{
		printf(" ");
	}
	printf("*");
	printf("\n");

	for (int i = 1; i < n; i++)
	{
		int t = 0;
		for (int j = i + 1; j < n; j++)
		{
			printf(" ");
			t++;
		}
		for (int j = t; j < n; j++)
		{
			printf("*");
		}
		printf("*");
		for (int j = 1; j < i; j++)
		{
			printf("*");
			t++;
		}
		printf("\n");
	}
}