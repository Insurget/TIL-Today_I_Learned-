#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

long long int dp[101] = { 0, 9 };
long long int map[101][10] = { {},{0, 1,1,1,1,1,1,1,1,1} };

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int sum = 0;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			map[i][j] = (map[i - 1][j - 1] + map[i - 1][j + 1]) % 1000000000;
		}
		map[i][0] = map[i - 1][1] % 1000000000;
		map[i][9] = map[i - 1][8] % 1000000000;
	}
	for (int i = 0; i < 10; i++)
		sum = (sum+map[n][i])%1000000000;

	cout << sum;
}