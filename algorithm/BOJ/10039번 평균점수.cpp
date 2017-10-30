#include <stdio.h>

auto t = [&](int x)->int {
	return x < 40 ? 40 : x;
};
int main()
{
	int a[5];
	int total = 0;
	for (int i = 0; i < 5; i++)scanf("%d", &a[i]);
	for (int i = 0; i < 5; i++) {
		total += t(a[i]);
	}
	printf("%d", total / 5);
}