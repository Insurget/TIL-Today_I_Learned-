#include <queue>
#include <stdio.h>
#include <iostream>

using namespace std;

int ind[32001];
vector<int> a[32001];
int n, m, l, w;

int main()
{
	ios::sync_with_stdio(false);
	
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> l >> w;
		a[l].push_back(w);
		ind[w]++;
	}
	queue<int> q;
	for (int i = 1; i <= n; i++)if (ind[i] == 0)q.push(i);

	for (int i = 0; i < n; i++)
	{
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int k = 0; k < a[x].size(); k++)
		{
			int y = a[x][k];
			ind[y]--;
			if (ind[y] == 0)q.push(y);
		}
	}
	printf("\n");
}