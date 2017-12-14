#include <iostream>
#include <algorithm>

using namespace std;

int ata[1001];
int dp[1001];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> ata[i];
		dp[i] = ata[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			dp[i + j] = max(dp[i + j], dp[i] + ata[j]);
		}
	}
	cout << dp[n];
}