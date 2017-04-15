#include<stdio.h>

int main(void)
{
	int n[8],ans=0;
	scanf("%d %d %d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7]);
	for (int i = 0; i < 7; i++) {
		if (n[i] == n[i + 1] + 1)
			ans--;
		else if (n[i] == n[i + 1] - 1)
			ans++;
		else break;
	}
	if (ans == 7)printf("ascending");
	else if (ans == -7)printf("descending");
	else printf("mixed");
}