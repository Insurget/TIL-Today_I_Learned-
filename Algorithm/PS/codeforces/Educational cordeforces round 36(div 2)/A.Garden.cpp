#pragma warning(disable:4996)
#include <cstdio>
#include <algorithm>
int n, k, cnt = 0;
int bucket[101];

int main()
{
	int s = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &bucket[i]);
		if (k%bucket[i] == 0)
		{
			s = std::max(bucket[i], s);
		}
	}
	printf("%d", k / s);
}