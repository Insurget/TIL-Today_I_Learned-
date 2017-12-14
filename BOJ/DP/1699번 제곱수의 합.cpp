#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>

using namespace std;

int dp[100001];

int main()
{
	for (int i = 1; i < 100001; i++)dp[i] = INT_MAX;
		
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i*i <= n; i++)
	{
		for (int j = i*i; j <= n; j++)
		{
			dp[j] = min(dp[j - (i*i)] + 1, dp[j]);
		}
	}
	cout << dp[n];
}