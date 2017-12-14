#include <vector>
#include <string>
#include <iostream>
using namespace std;

string type[] = { "gold", "light", "nature", "mana", "dark" };
int memo[5];

int main()
{
	int N;
	cin >> N;
	vector<string> deck;
	for (int i = 0; i < N; i++) {
		string n;
		cin >> n;
		deck.push_back(n);
	}

	int kind=0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5; j++) {
			if (deck[i] == type[j] && memo[j] == 0) {
				kind++;
				memo[j]++;
			}
		}
	}
	if (kind > 3)cout << "invaild";
	else cout << "vaild";
}