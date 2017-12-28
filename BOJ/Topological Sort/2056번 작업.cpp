#pragma warning(disable:4996)
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int n, e, x;
queue<int> q;
int ind[10001];
int d[10001];
vector<int> a[10001];

int main()
{
	vector<int> tt(10001);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &e, &x);
		tt[i] = e;
		ind[i] = x;

		for (int j = 0; j < x; j++)
		{
			int m;
			scanf("%d", &m);
			a[m].push_back(i);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (ind[i] == 0) {
			q.push(i);
			d[i] = tt[i];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		x = q.front();
		q.pop();
		for (int k = 0; k < a[x].size(); k++)
		{
			int y = a[x][k];
			ind[y] -= 1;
			d[y] = max(d[y], d[x] + tt[y]);

			if (ind[y] == 0)q.push(y);
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		ans = max(d[i], ans);
	}
	printf("%d", ans);
}