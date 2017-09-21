#include <iostream>

using namespace std;

unsigned long long dp[31][31];

int main()
{
	int N;
	cin >> N;
	dp[1][1] = 1;
	dp[1][2] = 2;
	dp[2][2] = 1;
	for (int i = 3; i < 31; i++)
		dp[1][i] = i;
	for (int i = 3; i < 31; i++)
	{
		for (int j = 2; j < 31; j++)
		{
			dp[j][i] = dp[j - 1][i - 1] + dp[j][i - 1];
		}
	}
	while (N--)
	{
		int n, r;
		cin >> r >> n;
		unsigned long long int p = 1, q = 1;
		if (n == r)cout << 1 << '\n';
		else
		{
			cout << dp[r][n] << '\n';
		}
	}
}