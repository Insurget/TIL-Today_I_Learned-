#include <stdio.h>

int main(void)
{
	int n, cow[11] = { 2,2,2,2,2,2,2,2,2,2,2 }, cow_num, cow_pos, cnt = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &cow_num, &cow_pos);

		if (cow[cow_num] != cow_pos && (cow[cow_num] == 0 || cow[cow_num] == 1)) cnt++;
		cow[cow_num] = cow_pos;
	}
	printf("%d", cnt);
}