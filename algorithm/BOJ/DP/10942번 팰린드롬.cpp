#include <stdio.h>

#pragma warning(disable:4996)

int s[2001];
int d[2001][2001];
int go(int i, int j)
{
	if (i == j)
	{
		return 2;
	}
	else if (i + 1 == j)
	{
		if (s[i] == s[j])return 2;
		else return 1; 
	}
	
	if (d[i][j] >= 1)return d[i][j];
	if (s[i] != s[j])return d[i][j] = 1;
	else return d[i][j] = go(i + 1, j - 1);
}

int main()	   
{			   
											   
	int n;									   
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)	   
	{										   
		scanf("%d", &s[i]);
	}										   
	int m;
	scanf("%d", &m);
	int a, b;

	for (int i = 0; i < m; i++)				   
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", go(a, b) - 1);
	}
}