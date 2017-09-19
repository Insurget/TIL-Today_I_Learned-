#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int kee[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> kee[i];
	}
	bool isfind = false;
	int a, b, c, d, e, f, g, h, i;

	for (c = 0; c < 9; c++)
	{
		for (d = 0; d < 9; d++)
		{
			if (c == d)continue;
			for (e = 0; e < 9; e++)
			{
				if (c == e || d == e)continue;
				for (f = 0; f < 9; f++)
				{
					if (c == f || d == f || e == f)continue;
					for (g = 0; g < 9; g++)
					{
						if (c == g || d == g || e == g || f == g)continue;
						for (h = 0; h < 9; h++)
						{
							if (c == h || d == h || e == h || f == h || g == h)continue;
							for (i = 0; i < 9; i++)
							{
								if (c == i || d == i || e == i || f == i || g == i || h == i)continue;
								if (kee[c] + kee[d] + kee[e] + kee[f] + kee[g] + kee[h] + kee[i] == 100) {
									isfind = true; break;
								}
							}
							if (isfind)break;
						}
						if (isfind)break;
					}
					if (isfind)break;
				}
				if (isfind)break;
			}
			if (isfind)break;
		}
		if (isfind)break;
	}
	int ans[7] = { kee[c],kee[d],kee[e],kee[f],kee[g],kee[h],kee[i] };
	sort(ans, ans + 7);
	for (i = 0; i < 7; i++)
		cout << ans[i] << '\n';
}