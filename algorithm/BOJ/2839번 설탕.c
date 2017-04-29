#include<stdio.h>
int main(void) {
	int n, x, ans = 0, c = -1, tr = 0;
	scanf("%d", &n);
	while (1) {
		if (n<0) { ans = -1; break; }
		if (n % 5 == 0) {
			ans = n / 5 + tr;
			break;
		}
		n -= 3;
		tr++;
	}
	printf("%d", ans);
}