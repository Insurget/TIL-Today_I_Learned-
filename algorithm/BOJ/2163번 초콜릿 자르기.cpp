#include <stdio.h>

#pragma warning(disable:4996)

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	printf("%d", (M - 1) + M*(N - 1));
}