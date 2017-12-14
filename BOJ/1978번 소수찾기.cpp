#include <iostream>

int num[1001];

int main()
{
	int n, cnt = 0;
	std::cin >> n;
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = i*i; j < 1000; j += i)
		{
			num[j] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		if (a == 1)continue;
		if (num[a] == 0)cnt++;
	}

	std::cout << cnt;
}