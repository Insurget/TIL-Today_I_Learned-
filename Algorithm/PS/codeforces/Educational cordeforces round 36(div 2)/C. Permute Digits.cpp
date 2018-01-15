#include <cstdio>
#pragma warning(disable:4996)

int d[19];
int main()
{
	int a, b;
	int i = 0;
	while (a != 0)
	{
		d[i++] = a % 10;
		a /= 10;
	}
}