#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		int j = i+1;
		for (; j < n; j++)
		{
			printf(" ");
			k++;
		}
		int m = 0;
		for (; k < n-1; k++)
		{
			printf("*");
			m++;
		}
		printf("*");
		while (m--)
		{
			printf("*");
		}
		printf("\n");
	}
}