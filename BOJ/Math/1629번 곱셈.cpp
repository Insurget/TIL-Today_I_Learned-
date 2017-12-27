#pragma warning(disable:4996)
#include <stdio.h>

long long a, b, c;

long long int mp(int a, int b)
{
	if (b == 0) {
		return 1LL;
	}
	else if (b == 1) {
		return a%c;
	}
	else if (b % 2 == 0) {
		long long temp = mp(a, b / 2) % c;
		return (temp*temp) % c;
	}
	else {
		return (a*mp(a, b - 1)) % c;
	}
}

int main()
{
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", mp(a, b));
}