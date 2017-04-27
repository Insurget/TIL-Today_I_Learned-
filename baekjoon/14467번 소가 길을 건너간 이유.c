#include <stdio.h>

int main(void)
{
	int n, cow[11], see_cow, see_pos, cnt=0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &see_cow, &see_pos);

		if ( cow[see_cow] != see_pos && (cow[see_cow] == 0 || cow[see_cow] == 1 )) cnt++;
		cow[see_cow] = see_pos;
	}
	printf("%d", cnt);
}