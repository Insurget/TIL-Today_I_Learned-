#include <iostream>

long long int dp[1001];
long long int ans[1001];

int main()
{
	int n;
	std::cin >> n;
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
	}
	std::cout << dp[n];
}