#include <stdio.h>

int main(void)
{
	int n, aver, max = 0;
	float a[1000], total = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int v;
		scanf("%d", &v);
		a[i] = v;
		if (v > max)
		{
			max = v;
		}
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = a[i] / max * 100;
		total += a[i];
	}
	printf("%.2f", (float)total / (float)n);
}