//#include <iostream>
//#include <cmath>
//#include <random>
//#include <time.h>
//
//using namespace std;
//
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--) {
//		int cnt = 0;
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		int n;
//		cin >> n;
//		while (n--) {
//			int cx, cy, r;
//			cin >> cx >> cy >> r;
//			double d1 = sqrt(pow(x1 - cx, 2) + pow(y1 - cy, 2));
//			double d2 = sqrt(pow(x2 - cx, 2) + pow(y2 - cy, 2));
//			if ((d1 < r&&r < d2) || (d2 < r&&r < d1))cnt++;
//		}
//		cout << cnt << '\n';
//	}
//}