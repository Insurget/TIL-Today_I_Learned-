#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	string a, b, ans;
	cin >> a >> b;

	int as = a.size(), bs = b.size();
	vector<vector<int>> table(a.size() + 1, vector<int>(b.size() + 1, 0));
	for (int i = 0; i < bs; i++)
	{
		for (int j = 0; j < as; j++)
		{
			if (b[i] == a[j])
			{
				for (int k = j; k < bs; k++)
				{
					table[i + 1][k + 1] = table[i - 1 + 1][k + 1] + 1;
				}
			}
		}
	}
	for (auto i : table)
	{
		for (auto j : i)
		{
			cout << j << ' ';
		}
		cout << '\n';
	}
}