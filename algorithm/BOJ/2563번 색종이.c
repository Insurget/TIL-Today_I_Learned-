#include <cstdio>

int board[101][101];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				board[y + j][x + k] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < 101; i++) {
		for(int j=0;j<101;j++){
			if (board[i][j] == 1)cnt++;
		}
	}
	printf("%d", cnt);
}