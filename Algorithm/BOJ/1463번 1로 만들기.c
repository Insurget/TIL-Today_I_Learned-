#include <stdio.h>

int min = 100000000;

int f(int x, int count) {
	if (count >= min)return;
	if (x < 1)return;
	if (x == 1) {
		if (min > count)min = count;
		return;
	}
	if (x % 3 == 0)f(x / 3, count+1);
	if (x % 2 == 0)f(x / 2, count+1);
	f(--x, count+1);
	return min;
}

int main(void) {
	int n;
	scanf("%d", &n);
	if (n == 1)printf("0");
	else printf("%d", f(n, 0));
}