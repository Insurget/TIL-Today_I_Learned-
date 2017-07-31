#include <iostream>
#include <list>
using namespace std;
int main() {
	int n;
	list<pair<int, int>> a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back({ x,i });
	}
	auto it = a.begin();
	for (int i = 0; i < n - 1; i++) {
		cout << (it->second) << ' ';
		int step = it->first;
		if (step > 0) {
			auto temp = it;
			++temp;		
			a.erase(it);
			if (temp == a.end())temp = a.begin();
			for (int i = 1; i < step; i++) {
				++temp;
				if (temp == a.end())temp = a.begin();
			}

			it = temp;
		}
		else if (step < 0) {
			step = -step;
			auto temp = it;	
			if (temp == a.begin())temp = a.end();
			--temp;	
			a.erase(it);

			for (int i = 1; i < step; i++) {
				if (temp == a.begin())temp = a.end();
				--temp;
			}
			it = temp;
		}
	}
	cout << a.front().second << '\n';
}