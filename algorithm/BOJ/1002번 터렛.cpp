#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
		//Âü°í : https://junhyeon2.cafe24.com/archives/658
int main()
{
	int n, ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, x2, y1, y2, r1, r2;

		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int big = max(r1, r2);
		int small = min(r1, r2);

		double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		if (distance == 0.0) {
			if (big == small)
				ans = -1;
			else
				ans = 0;
		}
		else {
			if (big - small < distance && big + small > distance)
				ans = 2;
			else if (big + small == distance || big - small == distance)
				ans = 1;
			else
				ans = 0;
		}
		cout << ans << '\n';
	}
}