#include <cstdio>
#pragma warning(disable:4996)

void hanoi(int x, int sc, int mc, int fc)
{
	if (x == 0)return;
	hanoi(x - 1, sc, fc, mc);
	printf("%d %d\n", sc, fc);
	hanoi(x - 1, mc, sc, fc);
}
	int a[52];
int main()
	{
	int n;
	scanf("%d\n", &n);

	a[51] = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j<52; j++)
		{
			if (a[j] * 2 >= 10)
			{
				a[j] = a[j] * 2 % 10;
				a[j - 1]++;
			}
			else a[j] *= 2;
		}
	}
	a[51]--;
	int i;
	for (i = 0; i < 52; i++)if (a[i] != 0)break;
	for (; i < 52; i++)printf("%d", a[i]);
	printf("\n");
	if(n<=20)
		hanoi(n, 1, 2, 3);
}
