#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		int x = a % 10;
		for (int i = 1; i < b; i++)
		{
			x *= a;
			x %= 10;
		}
		
		if (x == 0)x = 10;
		cout << x << '\n';
	}
}