#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int dp[100000];
int num[100000];

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> num[i];

	int Max = num[0];
	int now = num[0];

	for (int i = 1; i < n; i++)
	{
		now = max(now + num[i], num[i]);
		Max = max(Max, now);
	}
	cout << Max;
}