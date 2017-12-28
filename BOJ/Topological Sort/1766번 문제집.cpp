#pragma warning(disable:4996)
#include <cstdio>
#include <queue>

using namespace std;

vector<int> a[32001];
int n, m, ind[32001], z, zz;
priority_queue<int> q;

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) 
	{
		scanf("%d %d", &z, &zz);
		a[z].push_back(zz);
		ind[zz] += 1;
	}

	for (int i = 1; i <= n; i++)
	{
		if (ind[i] == 0) {
			q.push(-i);
		}
	}

	for (int i = 0; i < n; i++)
	{
		int x = -q.top();
		q.pop();
		printf("%d ", x);

		for (int j = 0; j < a[x].size(); j++)
		{
			ind[a[x][j]] -= 1;
			if (ind[a[x][j]] == 0) {
				q.push(-a[x][j]);
			}
		}
	}
	printf("\n");
}
