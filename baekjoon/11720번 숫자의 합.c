#include <stdio.h>

int main() {

	int n, i, num = 0, sum = 0, dv = 0;
	char str[105] = " ";

	scanf("%d", &n);

	scanf("%s", str);

	for (i = 0; i < n; i++) {

		sum += str[i] - 48;
	}

	printf("%d", sum);
}