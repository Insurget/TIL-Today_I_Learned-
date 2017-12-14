#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int cCnt=0;
	vector<vector<char>> board(N, vector<char>(N, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> board[j][i];
			if (board[j][i] == 'C')cCnt++;
			if (board[j][i] == 'D')cCnt--;
		}
	}
	cCnt++;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (board[j][i] == '.'&&cCnt > 0) {
				board[j][i] = 'D';
				cCnt--;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << board[j][i];
		}
		cout << endl;
	}

}