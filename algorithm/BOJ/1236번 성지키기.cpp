#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int cnt = 0;

int main() {
	int x, y;
	cin >> y >> x;
	vector<string> board(y);
	for (int i = 0; i < y; i++) {
		cin >> board[i];
	}
	
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			int cntx = 0, cnty = 0;
			for (int k = 0; k < x; k++) {
				if (board[i][k] != 'X')cntx++;
			}
			for (int k = 0; k < y; k++) {
				if (board[k][j] != 'X')cnty++;
			}
			if (cntx == x&&cnty == y) {
				cnt++;
				board[i][j] = 'X';
			}
		}
	}
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			int cntx = 0, cnty = 0;
			for (int k = 0; k < x; k++) {
				if (board[i][k] != 'X')cntx++;
			}
			for (int k = 0; k < y; k++) {
				if (board[k][j] != 'X')cnty++;
			}
			if (cntx == x||cnty == y) {
				cnt++;
				board[i][j] = 'X';
			}
		}
	}
	cout << cnt;
}