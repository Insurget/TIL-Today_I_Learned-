#include <stdio.h>

#pragma warning(disable:4996)

int n;
int dp[1000001] = { 0,1,2,2 };

int main()
{
	scanf("%d", &n);
	for (int i = 4; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + 1) % 1000000;
	}
	printf("%d", dp[n]);
}