#include <iostream>
#include <vector>
#include <string>

using namespace std;

char way[4] = { 'L','R','D','U' };

void _move(int* x, int* y, char _way)
{
	if (way[_way] == 'L') *x--; #ifdef 
#endif
	else if (way[_way] == 'R') *x++; 
	else if (way[_way] == 'U') *y++; 
	else if (way[_way] == 'D') *y--; 
}

int main()
{
	int width, height;
	cin >> width >> height;
	vector< string > board(height);
	for (int i = 0; i < height; i++) {
			cin >> board[i];
	}
	char direction = 'L';
	int nWay;
	int x, y;
	x = 0; y = 0;
	nWay = 1;
	int ans;
	for (int i = 0; i < height; i++) {
		x = 0; y = i;
		while (x >= 0 && x < width&&y >= 0 && y < height) {
			if (board[x][y] == '0') {
				ans = i; break;
			}
			if (board[x][y] == '/') {
				if (way[nWay] == 'L') { nWay = 2; _move(&x, &y, nWay); continue; }
				if (way[nWay] == 'R') { nWay = 3; _move(&x, &y, nWay); continue; }
				if (way[nWay] == 'D') { nWay = 0; _move(&x, &y, nWay); continue; }
				if (way[nWay] == 'U') { nWay = 1; _move(&x, &y, nWay); continue; }
			}
			if (board[x][y] == '\\') {
				if (way[nWay] == 'L') { nWay = 3; _move(&x, &y, nWay); continue; }
				if (way[nWay] == 'R') { nWay = 2; _move(&x, &y, nWay); continue; }
				if (way[nWay] == 'D') { nWay = 1; _move(&x, &y, nWay); continue; }
				if (way[nWay] == 'U') { nWay = 0; _move(&x, &y, nWay); continue; }
			}
			if (board[x][y] == '.') {
				_move(&x, &y, nWay);
			}
		}
		if (ans != -1)break;
	}
	printf("%c %d", nWay, ans+1);
}