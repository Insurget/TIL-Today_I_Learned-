#include<stdio.h>
int main(void) 
{
	int n, k, t, jari[3], hansu=0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i < 100) hansu++;
		else if (i == 1000) break;
		else {
			k = 0; t = i;
			while (t > 0) {
				jari[k] = t % 10;
				t /= 10; k++;
			}
			if (jari[0] - jari[1] == jari[1] - jari[2]) hansu++;
		}
	}
	printf("%d\n", hansu);
}