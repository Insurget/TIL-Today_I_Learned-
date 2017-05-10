#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int k = 1;
		int j = i + 1;
		int m = 0;

		for (; j - 1 > 0; j--)
		{
			printf(" ");
			k++;
		}
		for (; k < n; k++)
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