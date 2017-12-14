#include <stdio.h>
#include <algorithm>
#pragma warning(disable:4996)

int Gcd(int a, int b)
{
	return b ? Gcd(b, a%b) : a;
}

int main()
{
	int a, b, i = 1, gcd, lcm;
	scanf("%d %d", &a, &b);
	int m = std::max(a, b);
	int s = std::min(a, b);

	printf("%d\n%d", Gcd(m, s), m*s / Gcd(m, s));
}