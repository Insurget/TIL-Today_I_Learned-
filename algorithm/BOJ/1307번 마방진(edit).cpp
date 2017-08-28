#include <stdio.h>
#include <vector>
using std::vector;
int main() {
	int n;
	scanf("%d", &n);
	if (n & 1){
		vector<vector<int>> map(n + 1, vector<int>(n + 1, 0));
		int x = map.size() / 2 - 1, y = n-1;
		map[x++][y++]=1;
		for (int i = 2; i < n*n; i++) {
			//Out of range
			if (x >= n&&y >= n) {
				y -= 2;
				map[(--x)++][y++] = i;
			}
			else if (x >= n) {
				x = 0;
				map[x++][y++] = i;
			}
			else if (y >= n) {
				y = 0;
				map[x++][y++] = i;
			}
			//In range
				//Not Fill
			else if (!map[x][y]) {
				map[x++][y++] = i;
			}
				//Already Fill
			else {
				y -= 2;
				map[(--x)++][y++] = i;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d ", map[j][i]);
			}
			printf("\n");
		}
	}
	else {

	}
}
