#include <cstdio>
#include <cmath>
#include <algorithm>
#pragma warning(disable:4996)

bool left, right;
int main()
{#include <cstdio>
#include <cmath>
#include <algorithm>
#pragma warning(disable:4996)

bool left, right;
int main()
{
	int n, pos, l, k, cnt = 0;
	scanf("%d %d %d %d", &n, &pos, &l, &k);
	if (l == k)
	{
		cnt = abs(pos - l);
		if (k != n)cnt++;
		if (l != 1)cnt++;
	}
	else if (l == 1&&k==n)
	{
		cnt = 0;
	}
	else if (l == 1)
	{
		cnt = abs(pos - k) + 1;
	}
	else if (k == n)
	{
		cnt = abs(pos - l) + 1;
	}#include <cstdio>
#include <cmath>
#include <algorithm>
#pragma warning(disable:4996)

bool left, right;
int main()
{
	int n, pos, l, k, cnt = 0;
	scanf("%d %d %d %d", &n, &pos, &l, &k);
	if (l == k)
	{
		cnt = abs(pos - l);
		if (k != n)cnt++;
		if (l != 1)cnt++;
	}
	else if (l == 1&&k==n)
	{
		cnt = 0;
	}
	else if (l == 1)
	{
		cnt = abs(pos - k) + 1;
	}
	else if (k == n)
	{
		cnt = abs(pos - l) + 1;
	}
	else if (pos < l)
	{
		cnt = l - pos + 1 + (k - l) + 1;
	}
	else if (pos > k)
	{
		cnt = pos - k + 1 + (k - l) + 1;
	}
	else
	{
		cnt = std::min(pos - l, k - pos) * 2 + 2 + std::max(pos - l, k - pos);
	}
	printf("%d", cnt);
}
	else if (pos < l)
	{
		cnt = l - pos + 1 + (k - l) + 1;
	}
	else if (pos > k)
	{
		cnt = pos - k + 1 + (k - l) + 1;
	}
	else
	{
		cnt = std::min(pos - l, k - pos) * 2 + 2 + std::max(pos - l, k - pos);
	}
	printf("%d", cnt);
}
	int n, pos, l, k, cnt = 0;
	scanf("%d %d %d %d", &n, &pos, &l, &k);
	if (l == k)
	{
		cnt = abs(pos - l);
		if (k != n)cnt++;
		if (l != 1)cnt++;
	}
	else if (l == 1&&k==n)
	{
		cnt = 0;
	}
	else if (l == 1)
	{
		cnt = abs(pos - k) + 1;
	}
	else if (k == n)
	{
		cnt = abs(pos - l) + 1;
	}
	else if (pos < l)
	{
		cnt = l - pos + 1 + (k - l) + 1;
	}
	else if (pos > k)
	{
		cnt = pos - k + 1 + (k - l) + 1;
	}
	else
	{
		cnt = std::min(pos - l, k - pos) * 2 + 2 + std::max(pos - l, k - pos);
	}
	printf("%d", cnt);
}