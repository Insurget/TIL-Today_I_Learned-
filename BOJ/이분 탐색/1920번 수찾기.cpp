#pragma warning(disable:4996)
#include <set>
#include <algorithm>
#include <stdio.h>
using namespace std;
set<int> d;
int main()
{
	int a, b;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		d.insert(b);
	}
	scanf("%d", &b);
	for (int i = 1; i <= b; i++)
	{
		scanf("%d", &a);
		if (d.count(a))printf("1\n");
		else printf("0\n");
	}
}