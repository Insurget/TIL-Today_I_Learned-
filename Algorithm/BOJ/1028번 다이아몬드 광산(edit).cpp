#include <stdio.h>
#include <algorithm>

using namespace std;

#pragma warning(disable:4996)

int map[750][750];
int main()
{
	int R, C;
	scanf("%d %d", &R, &C);
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			scanf("%1d", &map[i][j]);
		}
	}
	int cntX = 0,
		cntY = 0,
		cntMax = 0;
	for (int i = 0; i < R; i++)
	{
		cntX = 0;
		for (int j = 0; j < C; j++)
		{
			if (map[i][j] == 1) { cntX++; cntMax = max(cntX, cntMax); }
			else cntX = 0;
		}
	}	
	for (int i = 0; i < C; i++)
	{
		cntY = 0;
		for (int j = 0; j < R; j++)
		{
			if (map[j][i] == 1) { cntY++; cntMax = max(cntY, cntMax); }
			else cntY = 0;
		}
	}
	if (cntMax > R || cntMax > C)cntMax = min(C, R);

	
}

//garbage code
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cstdio>
//#pragma warning(disable:4996)
//
//using namespace std;
//
//char map[750][750];
//
//int main()
//{
//	int r, c;
//	scanf("%d %d", &r, &c);
//
//	for (int i = 0; i < r; i++)
//	{
//		scanf("%s", &map[i]);
//	}
//
//	int cntX = 0,
//		cntY = 0,
//		cntMax = 0;
//	for (int i = 0; i < r; i++)
//	{
//		cntX = 0;
//		for (int j = 0; j < c; j++)
//		{
//			if (map[i][j])cntMax = max(++cntX, cntMax);
//			else cntX = 0;
//		}
//	}
//	for (int i = 0; i < c; i++)
//	{
//		cntY = 0;
//		for (int j = 0; j < r; j++)
//		{
//			if (map[j][i])cntMax = max(++cntY, cntMax);
//			else cntY = 0;
//		}
//	}
//	if (cntMax > c || cntMax > r)cntMax = min(c, r);
//	bool isAnswerFound = false;
//	do
//	{
//		for (int i = 0; i < r - cntMax + 1; i++)
//		{
//			for (int j = 0; j < c - cntMax + 1; j++)
//			{
//				int k;
//				for (k = 0; k < cntMax; k++)
//				{
//					if (map[i][j + k] == '0')break;
//				}
//				if (k != cntMax)continue;
//				for (k = 0; k < cntMax; k++)
//				{
//					if (map[i + k][j] == '0')break;
//				}
//				if (k != cntMax)continue;
//				for (k = 0; k < cntMax; k++)
//				{
//					if (map[i + cntMax - 1][j + k] == '0')break;
//				}
//				if (k != cntMax)continue;
//				for (k = 0; k < cntMax; k++)
//				{
//					if (map[i + k][j + cntMax - 1] == '0')break;
//				}
//				if (k != cntMax)continue;
//				isAnswerFound = !isAnswerFound;
//				break;
//			}
//			if (isAnswerFound)break;
//		}
//		if (isAnswerFound)break;
//	} while (cntMax--);
//	if (cntMax == -1)cout << '0';
//	else cout << cntMax;
//}