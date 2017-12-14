#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int dx[4] = {  0,0,1,-1 };
int dy[4] = { -1,1,0, 0 };

int main()
{
	int w, h;
	cin >> w >> h;
	vector<vector<int>> map(h, vector<int>(w, 0));
	vector<vector<int>> visited(h, vector<int>(w, 0));
	for (int y = 0; y < h; y++)
		for (int x = 0; x < w; x++)
			cin >> map[y][x];
	queue<pair<int, int>> qX;
	queue<int> qY;
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			if (map[y][x] == 1) {
				qX.push({ x, 0 });
				qY.push(y);
				visited[y][x] = 1;
			}

		}
	}
	int key = 0;
	while (!qX.empty())
	{
		pair<int, int> pos(qX.front().first, qY.front());
		int keyn = qX.front().second;
		key = qX.front().second;
		qX.pop();
		qY.pop();
		for (int i = 0; i < 4; i++)
		{
			int nextX = pos.first + dx[i];
			int nextY = pos.second + dy[i];
			if (nextX < 0 || nextY < 0 || nextX >= w || nextY >= h)continue;
			if (visited[nextY][nextX] == 1 || map[nextY][nextX] == 1 || map[nextY][nextX] == -1)continue;
			visited[nextY][nextX] = 1;
			qX.push({ nextX, keyn + 1});
			qY.push(nextY);
		}
	}

	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			if (map[y][x] == -1)continue;
			if (visited[y][x] == 0)key = -1;
		}
	}
	cout << key;
}