#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
#pragma warning(disable:4996)

string a;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		cin >> n >> a;
		for (int j = 0; j < a.size(); j++)
		{
			for (int i = 0; i < n; i++)
			{
				cout << a[j];
			}
		}
		cout << '\n';
	}
}