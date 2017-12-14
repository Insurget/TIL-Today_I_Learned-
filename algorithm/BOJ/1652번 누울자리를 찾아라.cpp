#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> room;

int main()
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int s, e = 0, sex = 0;
	cin >> s;

	room.resize(s);

	for (int i = 0; i < s; i++)
	{
		cin >> room[i];
	}
	for (int y = 0; y < s; y++)
	{
		for (int x = 0; x < s; x++)
		{
			if (room[y][x] == '.'&&x + 1 != s)
			{
				if (room[y][x + 1] == '.')
				{
					if (x + 2 == s || room[y][x + 2] == 'X')e++;
				}
			}
			if (room[y][x] == '.'&&y + 1 != s)
			{
				if (room[y + 1][x] == '.')
				{
					if (y + 2 == s || room[y + 2][x] == 'X')sex++;
				}
			}
		}
	}
	cout << e << ' ' << sex;
}