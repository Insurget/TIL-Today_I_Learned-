#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int podo[10000];
int dp[10000];

int main()
{
	//std::ios::sync_with_stdio(false);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)cin >> podo[i];

	dp[0] = podo[0];
	if (N == 1)cout << dp[0];
	else {
		dp[1] = podo[0] + podo[1];
		if (N == 2)cout << dp[1];
		else {
			dp[2] = max(podo[0] + podo[1], podo[1] + podo[2]);
			dp[2] = max(dp[2], podo[0] + podo[2]);
			for (int i = 3; i < N; i++)
			{
				dp[i] = max(dp[i - 2] + podo[i], dp[i - 3] + podo[i - 1] + podo[i]);
				dp[i] = max(dp[i - 1], dp[i]);
			}

			cout << dp[N - 1];
		}
	}
}