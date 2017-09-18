#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int dx[3] = { 0,1,-1 };
int n, k, cnt;
int visited[100001];
queue<pair<int, int>> q;

int bfs(int n)
{
	q.push({ n, 0 });
	visited[n] = 1;
	while (!q.empty())
	{
		int pos = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (pos == k)return cnt;
		for (int i = 0; i < 3; i++)
		{
			int next;

			if (dx[i] != 0)
			{
				next = pos + dx[i];
			}
			else
			{
				next = pos * 2;
			}
			if (0 <= next&&next <= 100000 && !visited[next])
			{
				visited[next] = !visited[next];
				q.push({ next, cnt + 1 });
			}
		}
	}
}

int main()
{
	cin >> n >> k;
	bfs(n);

	cout << cnt;
}