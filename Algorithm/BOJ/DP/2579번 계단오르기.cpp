#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int dp[305];

int main()
{
	int n;
	cin >> n;
	vector<int> stairs(n);

	for (int i = 0; i < n; i++)cin >> stairs[i];

	dp[0] = stairs[0];
	dp[1] = max(stairs[1] + stairs[0], stairs[1]);
	dp[2] = max(stairs[1] + stairs[2], stairs[0] + stairs[2]);

	for (int i = 3; i < n; i++) {
		dp[i] = max(dp[i - 2] + stairs[i], stairs[i - 1] + dp[i - 3] + stairs[i]);
	}
	cout << dp[n - 1];

	return 0;
}