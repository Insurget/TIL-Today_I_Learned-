#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int k = i; n - k > 0; k++)	printf(" ");
		for (int j = i; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}