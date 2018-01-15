#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	printf("%d ", Logic1(n));
	printf("%d", Logic2(n));
}

int Logic1(int n)	//O(N^3)
{
	int cnt = 0;
	for (int i = 2; i < n - 3; i += 2)
	{
		for (int j = 1; j < n - i; j++)
		{
			for (int k = j + 2; i + j + k <= n; k++)
			{
				if (i + j + k == n)cnt++;
			}
		}
	}
	return cnt;
}

int Logic2(int n)	//O(N^2)
{
	int cnt = 0;
	for (int i = 1; i < n - 3; i++)
	{
		for (int j = i + 2; i + j < n - 2; j++)
		{
			if ((n - j - i) % 2 == 0)cnt++;
		}
	}
	return cnt;
}

int Logic3(int n)	//O(N)
{
	int cnt = 0;
	for (int i = 2; i < n-3; i += 2)
	{
		 nj, 
	}
}