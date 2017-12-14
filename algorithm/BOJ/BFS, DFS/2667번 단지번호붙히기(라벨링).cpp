#pragma warning(disable:4996)
#include <stdio.h>
#include <algorithm>

using namespace std;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
bool map[26][26];
int house[26 * 26];
char str[26];
int n, a, cnt = 0;

bool dfs(int x, int y)
{
	if (map[x][y])
	{
		map[x][y] = false;
		house[cnt]++;
		for (int i = 0; i < 4; i++)dfs(x + dx[i], y + dy[i]);
		return true;
	}
	else return false;
}

int main()
{
	scanf("%d", &n);
	for (int y = 1; y <= n; y++)
	{
		scanf("%s", str);
		for (int x = 1; x <= n; x++)
		{
			map[x][y] = str[x - 1] == '0' ? 0 : 1;
		}
	}
	for (int y = 1; y <= n; y++)
		for (int x = 1; x <= n; x++)
		{
			if (map[x][y]) { dfs(x, y); cnt++; }
		}
	sort(house, house + cnt);
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++)
	{
		printf("%d\n", house[i]);
	}
}