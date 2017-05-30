#include <stdio.h>
#include <malloc.h>

int reverse(int x)
{
	int y = 0;
	while (x != 0)
	{
		y *= 10;
		y += x % 10;
		x /= 10;
	}
	return y;
}

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	short* prime = (short*)malloc(sizeof(short)*10000000);

	for (int i = 2; i <= b&&i < 10000000; i++) {
		prime[i] = 1;
	}

	for (int i = 2; i <= b&&i < 10000000; i++) {
		if (prime[i] == 0)continue;
		for (int j = i + i; j <= 10000000 && j <= b; j += i) {
			prime[j] = 0;
		}
	}

	for (int i = a; i <= b&&i <= 10000000; i++) {
		if (reverse(i) == i) {
			if (prime[i])printf("%d\n", i);
		}
	}
	printf("-1");
}