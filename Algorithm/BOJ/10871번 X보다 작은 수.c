#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, x;
	scanf("%d %d", &n, &x);
	int *num = (int*)malloc(sizeof(int)*n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (num[i] < x)printf("%d ", num[i]);
	}
	free(num);
}