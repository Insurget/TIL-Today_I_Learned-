#include <iostream>
#include <stdio.h>

using namespace std;

int s[1000000];
int main()
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	int e, x;
	long long t = n;
	cin >> e >> x;
	for (int i = 0; i < n; i++)
	{

		if (s[i] - e <= 0)continue;
		s[i] -= e;
		if (s[i] % x == 0)
		{
			t += s[i] / x;
		}
		else t += s[i] / x + 1;
	}

	cout << t;
}