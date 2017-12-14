#include <iostream>

using namespace std;

int main()
{
	int x;

	cin >> x;

	int i, total = 0;

	for (i = 1;; i++)
	{
		total += i;
		if (total >= x)break;
	}

	int pos = total - x;
	if (i & 1)
	{
		cout << pos + 1 << '/' << i - pos;
	}
	else
	{
		cout << i - pos << '/' << pos + 1;
	}
}