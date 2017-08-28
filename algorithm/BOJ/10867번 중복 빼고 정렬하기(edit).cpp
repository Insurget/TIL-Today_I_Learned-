#include <set>
#include <iostream>

using namespace std;

set<int> a;

int main()
{
	int n;
	cin >> n;
	while (n--) {
		int N;
		cin >> N;
		a.insert(N);
	}
	for (auto t : a) {
		cout << t << ' ';
	}
}