#include <iostream>
#include <queue>

using namespace std;

int w[101][101], cnt = 0;
int visit[101] = { 0, 1, };

int main()
{
	int n, net, a, b;

	cin >> n;
	cin >> net;

	for (int i = 0; i < net; i++) 
	{
		cin >> a >> b;
		w[a][b] = w[b][a] = 1;
	}
	queue<int> q;
	q.push(1);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (w[now][i]&&!visit[i])
			{
				visit[i] = 1;
				q.push(i);
				cnt++;
			}
		}
	}
	cout << cnt;
}