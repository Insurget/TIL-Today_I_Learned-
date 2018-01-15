#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	f(n);
}

int now = 0;
int f(int n) {
	if (now == 5)return printf(" ");
	else if (n >= 1) {
		printf("*"); return f(n - 1); now++;
}