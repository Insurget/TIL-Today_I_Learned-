#include <string>
#include <map>
#include <iostream>

using std::map;
using std::string;
using std::cin;
using std::cout;
int main()
{
	map<string, int> n = {
	   {"black", 0}, {"brown",1},{"red",2},
	   {"orange",3}, {"yellow",4},{"green",5},
	   {"blue",6},{"violet",7},{"grey",8},
	   {"white",9} };

	string a, b, c;
	cin >> a >> b >> c;
	long long tot = (long long)(n[a] * 10 + n[b]);
	for (int i = 0; i < n[c]; i++) {
		tot *= 10LL;
	}
	cout << tot<<'\n';
}