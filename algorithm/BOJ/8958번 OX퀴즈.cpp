#include <iostream>
#include <string>

using namespace std;
string ans;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ans;
		int score = 0;
		int nowScore = 0;
		for (int j = 0; j < ans.size(); j++) {
			if (ans[j] == 'O') {
				nowScore++;
				score += nowScore;
			}
			else if (ans[j] == 'X') {
				nowScore = 0;
			}
		}
		cout << score << '\n';
	}
}