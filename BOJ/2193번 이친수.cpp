#include <stdio.h>

long long int memo[91];

long long int f(int N) {
	if (N == 1)return 1;
	else if (N == 2)return 1;
	else if (N == 3)return 2;
	else if (memo[N] != 0)return memo[N];
	else return memo[N] = f(N - 1) + f(N - 2);
}

int main(void)
{
	int N;

	scanf("%d", &N);
	printf("%lld\n", f(N));

	for (int i = 1; i <= N; i++) {
		printf("memo[%d] = %lld\n", i, memo[i]);
	}
}