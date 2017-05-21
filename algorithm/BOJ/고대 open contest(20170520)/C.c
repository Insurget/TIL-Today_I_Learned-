#include <stdio.h>

int main(void)
{
	int Ateam[9], Bteam[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &Ateam[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &Bteam[i]);
	}

	int A = 0, B = 0;
	int k, temp, n=0;
	for (int i = 0; i < 9; i++)
	{
		k = 0;
		temp = A;
		A += Ateam[i];
		if (A > B)k = 1;
		B += Bteam[i];
		if (B > A && k == 1)n = 1;
	}
	if (n == 1)printf("Yes");
	else printf("No");
}