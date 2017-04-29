#include <stdio.h>

int hansu(int n)
{
	if (n / 100 - n % 100 / 10 == n % 100 / 10 - n % 10) {
		//printf("공차 : %+3d ", n % 100 / 10 - n % 10);
		return 1;
	}
	else return 0;
}
int main(void)
{
	int n, t=0;

	int j = 0;
	while (j<1000) {
		t = 0;
		scanf("%d", &n);
		do
		{
			if (hansu(n)) {
				t++;
				//printf("한수 %-5d t : %d\n",n, t);
			}
		} while (--n > 100);
		printf("%d : %d\n", j, t + 99);
		j++;
	}
}
// 참고용 소스
/*
#include<stdio.h>
void main() {
	int n, i, k, t, a[3], han=0;

	int j=1000;
	while (j--) {
		scanf("%d", &n);
		for (i = 1; i <= n; i++) {
			if (i < 100) han = i;
			else if (i == 1000) break;
			else {
				k = 0; t = i;
				while (t > 0) {
					a[k] = t % 10;
					t /= 10; k++;
				}
				if (a[0] - a[1] == a[1] - a[2]) han++;
			}
		}
		printf("%d\n", han);
	}
}*/