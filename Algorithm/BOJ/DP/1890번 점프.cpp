#include <stdio.h>
#pragma warning(disable:4996)
			
			
long long int dp[102][102];
int map[102][102];
			
int main()	
{			
	int n;	
	scanf("%d", &n);
			
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &map[i][j]);
	dp[1][1] = 1;
	for (int i = 1; i <= n; i++)
	{		
		for (int j = 1; j <= n; j++)
		{	
			if (map[i][j] == 0 || dp[i][j] == 0)continue;
			if (j + map[i][j] <= n)
				dp[i][j + map[i][j]] += dp[i][j];
			if (i + map[i][j] <= n)
				dp[i + map[i][j]][j] += dp[i][j];
		}	
	}		
	printf("%lld", dp[n][n]);
}			