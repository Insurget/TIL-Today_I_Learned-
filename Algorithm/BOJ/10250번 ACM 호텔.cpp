#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int y, x, n;
		cin >> y >> x >> n;
		if (n%y == 0)
		{
			cout << y;
		}
		else
			cout << n%y;
		if (n%y == 0)
		{
			if (n / y < 10)cout << 0;
			cout << n / y << '\n';
		}
		else
		{
			if (n / y + 1 < 10)cout << 0;
			cout << n / y + 1 << '\n';
		}
	}
}