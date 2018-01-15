#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int n, b;
	cin >> n;
	vector<int> a;

	for (int i = 0; i < n; i++) 
	{
		cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	int total = 0;
	for (int i = 0; i < n; i++) 
	{
		int temp = 0;
		for (int j = 0; j <= i; j++) 
		{
			temp += a[j];
		}
		total += temp;
	}
	cout << total;
}