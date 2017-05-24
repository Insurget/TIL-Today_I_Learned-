#include <stdio.h>
int zero = 0;
int one = 0;
int f(int n)
{
	if (n == 0) {
		zero++;
		return 0;
	}
	else if (n == 1) {
		one++;
		return 1;
	}
	else
		return f(n - 1) + f(n - 2);
}
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int n1;
		scanf("%d", &n1);
		f(n1);
		printf("%d %d\n", zero, one);
		zero = 0; one = 0;
	}
}