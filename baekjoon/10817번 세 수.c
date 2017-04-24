#include <stdio.h>
int f(int a, int b, int c)
{
	if (a<b)return f(b, a, c);
	else if (b<c)return f(a, c, b);
	else if (a<c)return f(c, b, a);
	return printf("%d", b);
}
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	f(a, b, c);
}