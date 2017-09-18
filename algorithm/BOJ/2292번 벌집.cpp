#include <iostream>

using namespace std;

int main()
{
	int a, cnt = 1, temp = 1;
	cin >> a;
	for (int i = 0;; i++)
	{
		if (a == 1)break;
		for (int j = 0; j <= i; j++)
		{
			temp += 6;
		}
		cnt++;
		if (a <= temp)break;
	}
	cout << cnt << '\n';
}