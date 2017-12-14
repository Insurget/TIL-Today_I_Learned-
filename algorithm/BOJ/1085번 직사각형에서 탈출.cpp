#include <iostream>
#include <algorithm>
using namespace std;
int x, y, w, h;

int main()
{
	std::cin >> x >> y >> w >> h;
	int m = min(x, y);
	m = min(m, h - y);
	m = min(m, w - x);
	std::cout << min(x, min(h - y, min(w - x, y)));
}