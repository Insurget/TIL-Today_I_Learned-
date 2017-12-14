#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int h, w, nowx, nowy;
int visit[100][100];
vector<string> map;
queue<int> queueX, queueY;
int d[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
bool isFind;

int main()
{
	cin >> h >> w;
	map.resize(h);
	for (int i = 0; i < h; i++) {
		cin >> map[i];
	}
	queueX.push(0);
	queueY.push(0);
	visit[0][0] = 1;
	while (!queueX.empty()) {
		int x = queueX.front();
		int y = queueY.front();
		queueX.pop(); queueY.pop();
		for (int i = 0; i < 4; i++) {
			int nextX = x + d[i][0];
			int nextY = y + d[i][1];
			if (nextX < 0 || nextY < 0 || nextX >= w || nextY >= h)continue;
			if (map[nextY][nextX] == '0')continue;
			if (visit[nextY][nextX] != 0)continue;
			visit[nextY][nextX] = visit[y][x] + 1;
			if (nextY == h - 1 && nextX == w - 1) {
				isFind = true; break;
			}
			queueX.push(nextX);
			queueY.push(nextY);
		}
		if (isFind)break;
	}
	cout << visit[h-1][w-1];
}