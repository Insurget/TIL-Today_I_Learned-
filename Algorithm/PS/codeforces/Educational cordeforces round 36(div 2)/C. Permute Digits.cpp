#include <cstdio>
#include <cmath>
#pragma warning(disable:4996)

int a[20], b;
int i = 1;
void f(int x, int* z)
{
	while (x != 0)
	{
		z[i++] = x % 10;
		x /= 10;
	}
	i--;
}
int t;
int temp;

void fun(int a, int digit)
{
	temp = 0;
}

int main()
{
	scanf("%d %d", &a[0], &b);
	f(a[0], a);
	t = a[0];
	fun(a[1], i);
	
}
