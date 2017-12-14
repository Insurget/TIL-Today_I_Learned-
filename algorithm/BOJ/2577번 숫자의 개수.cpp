#include <iostream>

using namespace std;

int num[10] = { 0 };

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	long long ans = a*b*c;

	while (ans != 0) {
		int temp = ans % 10;
		ans /= 10;
		num[temp]++;
	}
	for (int i = 0; i < 10; i++)cout << num[i] << '\n';
}