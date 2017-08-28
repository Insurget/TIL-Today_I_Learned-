#include <stdio.h>

int main(void)
{
	char n[1000000];
	int cnt = 0, i;
	for (i = 0; i<1000000; i++)n[i] = 0;
	scanf("%[^n]s", n);
	i = 0;
	while (n[i] != 0) {
		if (n[i++] == ' ')cnt++;
	}
	printf("%d", ++cnt);
}