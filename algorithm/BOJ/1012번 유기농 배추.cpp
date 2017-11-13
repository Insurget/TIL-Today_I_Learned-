#include <stdio.h>
#include <memory.h>

#pragma warning(disable:4996)

const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };

int tc, n, m, k, i, j, x, y, cnt;
bool map[52][52];

void dfs(int x, int y) {
	map[x][y] = 0;
	for (int i = 0; i < 4; i++)
	{
		if (map[x + dx[i]][y + dy[i]]) dfs(x + dx[i], y + dy[i]);
	}
}

int main() {
	scanf("%d", &tc);

	while (tc--) {
		cnt = 0; memset(map, 0, sizeof(map));
		scanf("%d %d %d", &n, &m, &k);
		while (k--) {
			scanf("%d %d", &x, &y);
			map[++x][++y] = 1;
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= m; j++)
			{
				if (map[i][j]) cnt++, dfs(i, j);
			}
		}
		printf("%d\n", cnt);
	}

	return 0;
}