#include <stdio.h>

int main(void)
{
	int n, cnt = 0;
	scanf("%d", &n);

	for (int i = 2; i < n-3; i += 2)
	{
		for (int j = 1; j < n - i; j++)
		{
			for (int k = j+2; i + j + k <= n; k++)
			{
				if (i + j + k == n)cnt++;
			}
		}
	}
	printf("%d", cnt);
}