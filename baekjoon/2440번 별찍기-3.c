#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; n-j>=0; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}