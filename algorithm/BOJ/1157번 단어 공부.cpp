#include <map>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	map<char, int> a;
	a['Y'] = 0; a['Z'] = 0;
	a['Q'] = 0; a['R'] = 0; a['S'] = 0; a['T'] = 0; a['U'] = 0; a['V'] = 0; a['W'] = 0; a['X'] = 0;
	a['I'] = 0; a['J'] = 0; a['K'] = 0; a['L'] = 0; a['M'] = 0; a['N'] = 0; a['O'] = 0; a['P'] = 0;
	a['A'] = 0; a['B'] = 0; a['C'] = 0; a['D'] = 0; a['E'] = 0; a['F'] = 0; a['G'] = 0; a['H'] = 0;
	a['a'] = 0;	a['b'] = 0;	a['c'] = 0;	a['d'] = 0;	a['e'] = 0;	a['f'] = 0;	a['g'] = 0;	a['h'] = 0;
	a['i'] = 0;	a['j'] = 0;	a['k'] = 0;	a['l'] = 0;	a['m'] = 0;	a['n'] = 0;	a['o'] = 0;	a['p'] = 0;
	a['q'] = 0;	a['r'] = 0;	a['s'] = 0;	a['t'] = 0;	a['u'] = 0;	a['v'] = 0;	a['x'] = 0;	a['w'] = 0;
	a['y'] = 0; a['z'] = 0;
	string n;
	cin >> n;
	for (int i = 0; i < n.size(); i++)
	{
		a[n[i]]++;
	}
	bool temp = false;
	char m = 'A';
	int max = a['A'] + a['a'];
	for (int i = 66; i <= 90; i++)
	{
		if (a[i] + a[i + 32] == max)
		{
			temp = true;
		}
		if (a[i] + a[i + 32] > max)
		{
			max = a[i] + a[i + 32];
			temp = false;
			m = i;
		}
		if (i == 90)break;
	}
	if (temp)cout << '?';
	else cout << m;
}