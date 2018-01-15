#include <stdio.h>

long long int memo[91];

long long int f(int n) {
	if (n <= 1)return 1;
	else if (memo[n] != 0)return memo[n];
	else return memo[n] = f(n - 1) + f(n - 2);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", f(n - 1));
}