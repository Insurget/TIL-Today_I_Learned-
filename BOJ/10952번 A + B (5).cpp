#pragma warning(disable:4996)
#include <stdio.h>
int a, b;
int main()
{
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (!a&&!b)break;
		printf("%d\n", a + b);
	}
}