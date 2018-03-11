#pragma warning (disable:4996)
#include <stdio.h>
int zero[41], one[41];


int main(void)
{
	zero[0] = 1; one[0] = 0;
	zero[1] = 0, zero[2] = 1, one[1] = 1, one[2] = 1;
	for (int i = 3; i <= 40; i++)
	{
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		printf("%d %d\n", zero[a], one[a]);
	}
}